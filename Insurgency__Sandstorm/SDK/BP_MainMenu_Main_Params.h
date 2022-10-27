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
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.SetVisibilityCreditOnConsole
	 */
	struct UBP_MainMenu_Main_C_SetVisibilityCreditOnConsole_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.GetMenuOptionToFocus
	 */
	struct UBP_MainMenu_Main_C_GetMenuOptionToFocus_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.HidePlayerCounterOnConsole
	 */
	struct UBP_MainMenu_Main_C_HidePlayerCounterOnConsole_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.HidePlayerStatisticsOnConsole
	 */
	struct UBP_MainMenu_Main_C_HidePlayerStatisticsOnConsole_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.HideCompetitiveRankOnConsole
	 */
	struct UBP_MainMenu_Main_C_HideCompetitiveRankOnConsole_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.HideSubmitFeedbackButtonOnConsole
	 */
	struct UBP_MainMenu_Main_C_HideSubmitFeedbackButtonOnConsole_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.GetReplaysButtonVisibilityOnConsole
	 */
	struct UBP_MainMenu_Main_C_GetReplaysButtonVisibilityOnConsole_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnCustomNavigation
	 */
	struct UBP_MainMenu_Main_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.CheckShouldShowHistoryHighlightsNotification
	 */
	struct UBP_MainMenu_Main_C_CheckShouldShowHistoryHighlightsNotification_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.InvalidateMenuOptions
	 */
	struct UBP_MainMenu_Main_C_InvalidateMenuOptions_Params
	{
	public:
		class FText                                                NewHover;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.RestoreMainFocus
	 */
	struct UBP_MainMenu_Main_C_RestoreMainFocus_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnKeyDown
	 */
	struct UBP_MainMenu_Main_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.OpenFeedbackMenu
	 */
	struct UBP_MainMenu_Main_C_OpenFeedbackMenu_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.Get_BottomRightMenu_Visibility_1
	 */
	struct UBP_MainMenu_Main_C_Get_BottomRightMenu_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.GetFirstMenuOptionVisible
	 */
	struct UBP_MainMenu_Main_C_GetFirstMenuOptionVisible_Params
	{
	public:
		class UWidget*                                             Row;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnFocusReceived
	 */
	struct UBP_MainMenu_Main_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.GetVisibilityCollapsedOnConsole
	 */
	struct UBP_MainMenu_Main_C_GetVisibilityCollapsedOnConsole_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnPageSelected
	 */
	struct UBP_MainMenu_Main_C_OnPageSelected_Params
	{
	public:
		EnumMainMenuPage                                           NewPage;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VTD4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.Construct
	 */
	struct UBP_MainMenu_Main_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnSingleplayer_K2Node_ComponentBoundEvent_13_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnSingleplayer_K2Node_ComponentBoundEvent_13_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnMultiplayer_K2Node_ComponentBoundEvent_17_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnMultiplayer_K2Node_ComponentBoundEvent_17_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnSettings_K2Node_ComponentBoundEvent_19_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnSettings_K2Node_ComponentBoundEvent_19_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnQuit_K2Node_ComponentBoundEvent_32_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnQuit_K2Node_ComponentBoundEvent_32_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnLocalGame_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnLocalGame_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnPanelOpened
	 */
	struct UBP_MainMenu_Main_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnPanelClosed
	 */
	struct UBP_MainMenu_Main_C_OnPanelClosed_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_61_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_61_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnProfile_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnProfile_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnTutorials_K2Node_ComponentBoundEvent_30_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnTutorials_K2Node_ComponentBoundEvent_30_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnCharacter_K2Node_ComponentBoundEvent_47_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnCharacter_K2Node_ComponentBoundEvent_47_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnMultiplayer_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnMultiplayer_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params
	{
	public:
		class FText                                                HoverText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnTutorials_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnTutorials_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params
	{
	public:
		class FText                                                HoverText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnLocalGame_K2Node_ComponentBoundEvent_26_OnHovered__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnLocalGame_K2Node_ComponentBoundEvent_26_OnHovered__DelegateSignature_Params
	{
	public:
		class FText                                                HoverText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnProfile_K2Node_ComponentBoundEvent_48_OnHovered__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnProfile_K2Node_ComponentBoundEvent_48_OnHovered__DelegateSignature_Params
	{
	public:
		class FText                                                HoverText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnSettings_K2Node_ComponentBoundEvent_91_OnHovered__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnSettings_K2Node_ComponentBoundEvent_91_OnHovered__DelegateSignature_Params
	{
	public:
		class FText                                                HoverText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnQuit_K2Node_ComponentBoundEvent_114_OnHovered__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnQuit_K2Node_ComponentBoundEvent_114_OnHovered__DelegateSignature_Params
	{
	public:
		class FText                                                HoverText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BP_KeyActionButton_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BP_KeyActionButton_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BP_MenuOptionRow_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BP_MenuOptionRow_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnCredits_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnCredits_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature_Params
	{
	public:
		class FText                                                HoverText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnMods_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnMods_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnModdingTermsConsent
	 */
	struct UBP_MainMenu_Main_C_OnModdingTermsConsent_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BP_MenuOptionRow_C_0_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BP_MenuOptionRow_C_0_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnModdingTermsCanceled
	 */
	struct UBP_MainMenu_Main_C_OnModdingTermsCanceled_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnSubmitFeedback_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnSubmitFeedback_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnAccountPicker_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnAccountPicker_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnButtonAddedToFocusPath
	 */
	struct UBP_MainMenu_Main_C_OnButtonAddedToFocusPath_Params
	{
	public:
		class UWidget*                                             MenuOption;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnLinkAccount_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnLinkAccount_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnServiceLoginComplete
	 */
	struct UBP_MainMenu_Main_C_OnServiceLoginComplete_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TU2T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                InServiceName;                                           // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.BndEvt__BtnStore_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_BndEvt__BtnStore_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.UpdateStoreNotification
	 */
	struct UBP_MainMenu_Main_C_UpdateStoreNotification_Params
	{
	public:
		bool                                                       bInHasNewItems;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInHasSales;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.ExecuteUbergraph_BP_MainMenu_Main
	 */
	struct UBP_MainMenu_Main_C_ExecuteUbergraph_BP_MainMenu_Main_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6SI6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_Main.BP_MainMenu_Main_C.OnMenuPageSelected__DelegateSignature
	 */
	struct UBP_MainMenu_Main_C_OnMenuPageSelected__DelegateSignature_Params
	{
	public:
		EnumMainMenuPage                                           NewPage;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
