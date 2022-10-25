#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.GetMenuOptionToFocus
	 */
	struct UBP_InGameMenu_Game_C_GetMenuOptionToFocus_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.RemoveCallVoteMenuWidget
	 */
	struct UBP_InGameMenu_Game_C_RemoveCallVoteMenuWidget_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnKeyUp
	 */
	struct UBP_InGameMenu_Game_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.Get_BtnCallVote_Visibility_1
	 */
	struct UBP_InGameMenu_Game_C_Get_BtnCallVote_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.GetVisibilityCollapsedOnConsole
	 */
	struct UBP_InGameMenu_Game_C_GetVisibilityCollapsedOnConsole_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.PopulateMutatorList
	 */
	struct UBP_InGameMenu_Game_C_PopulateMutatorList_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.UpdateCallVoteVisibility
	 */
	struct UBP_InGameMenu_Game_C_UpdateCallVoteVisibility_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnPreviewKeyDown
	 */
	struct UBP_InGameMenu_Game_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.GetHighlightsVisibility
	 */
	struct UBP_InGameMenu_Game_C_GetHighlightsVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BSTB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.GoBack
	 */
	struct UBP_InGameMenu_Game_C_GoBack_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.InvalidateOldMenuOption
	 */
	struct UBP_InGameMenu_Game_C_InvalidateOldMenuOption_Params
	{
	public:
		class FText                                                Option;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.Get_BtnSettings_Visibility_1
	 */
	struct UBP_InGameMenu_Game_C_Get_BtnSettings_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.PopulateScenarioRules
	 */
	struct UBP_InGameMenu_Game_C_PopulateScenarioRules_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KGIY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.Get_BottomRightMenu_Visibility_1
	 */
	struct UBP_InGameMenu_Game_C_Get_BottomRightMenu_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.SelectOption
	 */
	struct UBP_InGameMenu_Game_C_SelectOption_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.UnselectOptions
	 */
	struct UBP_InGameMenu_Game_C_UnselectOptions_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnKeyDown
	 */
	struct UBP_InGameMenu_Game_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.NavigateOptions
	 */
	struct UBP_InGameMenu_Game_C_NavigateOptions_Params
	{
	public:
		bool                                                       bUp;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HKR1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.GetFirstMenuOptionVisible
	 */
	struct UBP_InGameMenu_Game_C_GetFirstMenuOptionVisible_Params
	{
	public:
		class UWidget*                                             Row;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnFocusReceived
	 */
	struct UBP_InGameMenu_Game_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.Construct
	 */
	struct UBP_InGameMenu_Game_C_Construct_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnSettings_K2Node_ComponentBoundEvent_19_OnPressed__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_BndEvt__BtnSettings_K2Node_ComponentBoundEvent_19_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnQuit_K2Node_ComponentBoundEvent_32_OnPressed__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_BndEvt__BtnQuit_K2Node_ComponentBoundEvent_32_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnResumeGame_K2Node_ComponentBoundEvent_123_OnPressed__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_BndEvt__BtnResumeGame_K2Node_ComponentBoundEvent_123_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnLeaveGame_K2Node_ComponentBoundEvent_237_OnPressed__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_BndEvt__BtnLeaveGame_K2Node_ComponentBoundEvent_237_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnPanelOpened
	 */
	struct UBP_InGameMenu_Game_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnRoundReset
	 */
	struct UBP_InGameMenu_Game_C_OnRoundReset_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnLessons_K2Node_ComponentBoundEvent_24_OnPressed__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_BndEvt__BtnLessons_K2Node_ComponentBoundEvent_24_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnCallVote_K2Node_ComponentBoundEvent_413_OnPressed__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_BndEvt__BtnCallVote_K2Node_ComponentBoundEvent_413_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnResumeGame_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_BndEvt__BtnResumeGame_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params
	{
	public:
		class FText                                                HoverText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UWidget*                                             Ref;                                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnLeaveGame_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_BndEvt__BtnLeaveGame_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature_Params
	{
	public:
		class FText                                                HoverText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UWidget*                                             Ref;                                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnSettings_K2Node_ComponentBoundEvent_22_OnHovered__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_BndEvt__BtnSettings_K2Node_ComponentBoundEvent_22_OnHovered__DelegateSignature_Params
	{
	public:
		class FText                                                HoverText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UWidget*                                             Ref;                                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnExitToDesktop_K2Node_ComponentBoundEvent_43_OnHovered__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_BndEvt__BtnExitToDesktop_K2Node_ComponentBoundEvent_43_OnHovered__DelegateSignature_Params
	{
	public:
		class FText                                                HoverText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UWidget*                                             Ref;                                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.CheckRules
	 */
	struct UBP_InGameMenu_Game_C_CheckRules_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnSubmitFeedback_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_BndEvt__BtnSubmitFeedback_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.BndEvt__BtnBack_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_BndEvt__BtnBack_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.EventOnButtonAddedToFocusPath
	 */
	struct UBP_InGameMenu_Game_C_EventOnButtonAddedToFocusPath_Params
	{
	public:
		class FText                                                HoverText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UWidget*                                             Ref;                                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.ExecuteUbergraph_BP_InGameMenu_Game
	 */
	struct UBP_InGameMenu_Game_C_ExecuteUbergraph_BP_InGameMenu_Game_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnTryResumeGameBeforeLoadoutConfirmed__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_OnTryResumeGameBeforeLoadoutConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnLeaveGame__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_OnLeaveGame__DelegateSignature_Params
	{
	public:
		bool                                                       WantsToQuit;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnGoToSelectLoadout__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_OnGoToSelectLoadout__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnGoToSelectClass__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_OnGoToSelectClass__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnCallVoteSelected__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_OnCallVoteSelected__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnLessonsSelected__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_OnLessonsSelected__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_Game.BP_InGameMenu_Game_C.OnSettingsSelected__DelegateSignature
	 */
	struct UBP_InGameMenu_Game_C_OnSettingsSelected__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
