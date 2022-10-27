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
	 * Function BP_InGameMenu.BP_InGameMenu_C.UpdateHoverDifferenceAngleAndTranslation
	 */
	struct UBP_InGameMenu_C_UpdateHoverDifferenceAngleAndTranslation_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.Get Attribute Difference Brush
	 */
	struct UBP_InGameMenu_C_Get_Attribute_Difference_Brush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.GetAttributeDifferenceVisibility
	 */
	struct UBP_InGameMenu_C_GetAttributeDifferenceVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.KitSelectShoppingListClosed
	 */
	struct UBP_InGameMenu_C_KitSelectShoppingListClosed_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.KitSelectShoppingListOpened
	 */
	struct UBP_InGameMenu_C_KitSelectShoppingListOpened_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.CreateSelectClassHintDialog
	 */
	struct UBP_InGameMenu_C_CreateSelectClassHintDialog_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.OnConfirm
	 */
	struct UBP_InGameMenu_C_OnConfirm_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.RefreshHintsWidget
	 */
	struct UBP_InGameMenu_C_RefreshHintsWidget_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.GetWasMenuHiddenOnKeyDown
	 */
	struct UBP_InGameMenu_C_GetWasMenuHiddenOnKeyDown_Params
	{
	public:
		bool                                                       WasMenuHiddenOnKeyDown;                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9IYM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.SetWasMenuHiddenOnKeyDown
	 */
	struct UBP_InGameMenu_C_SetWasMenuHiddenOnKeyDown_Params
	{
	public:
		bool                                                       WasMenuHiddenOnKeyDown;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GRCM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.OnKeyUp
	 */
	struct UBP_InGameMenu_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.ShouldShowWeightBar
	 */
	struct UBP_InGameMenu_C_ShouldShowWeightBar_Params
	{
	public:
		bool                                                       bShouldShow;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.SetMenuEntryState
	 */
	struct UBP_InGameMenu_C_SetMenuEntryState_Params
	{
	public:
		EIngameMenuEntryState                                      EntryState;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.OnMatchStateUpdated
	 */
	struct UBP_InGameMenu_C_OnMatchStateUpdated_Params
	{
	public:
		class FName                                                NewMatchState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.CheckGameEndCloseWindow
	 */
	struct UBP_InGameMenu_C_CheckGameEndCloseWindow_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.HasConfirmedLoadout
	 */
	struct UBP_InGameMenu_C_HasConfirmedLoadout_Params
	{
	public:
		bool                                                       HasConfirmed;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QXJN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.SetInitialPage
	 */
	struct UBP_InGameMenu_C_SetInitialPage_Params
	{
	public:
		EInGameMenuPage                                            InPage;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y89N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.SetIsUsingController
	 */
	struct UBP_InGameMenu_C_SetIsUsingController_Params
	{
	public:
		bool                                                       UsingController;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EeInputIconType                                            InputIconType;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BindControllerDelegates
	 */
	struct UBP_InGameMenu_C_BindControllerDelegates_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.ToggleMenu
	 */
	struct UBP_InGameMenu_C_ToggleMenu_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.GoBack
	 */
	struct UBP_InGameMenu_C_GoBack_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.GetGameInfoVisibility
	 */
	struct UBP_InGameMenu_C_GetGameInfoVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7JZ5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.PopulateGameInfo
	 */
	struct UBP_InGameMenu_C_PopulateGameInfo_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.OnFocusReceived
	 */
	struct UBP_InGameMenu_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.OpenPage
	 */
	struct UBP_InGameMenu_C_OpenPage_Params
	{
	public:
		EInGameMenuPage                                            Page;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.OnKeyDown
	 */
	struct UBP_InGameMenu_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.Construct
	 */
	struct UBP_InGameMenu_C_Construct_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.OnPanelOpened
	 */
	struct UBP_InGameMenu_C_OnPanelOpened_Params
	{
	public:
		EIngameMenuType                                            DesiredMenu;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIngameMenuEntryState                                      FromState;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_7_OnTabSelected__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_7_OnTabSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_InGameMenu_ClassSelect_K2Node_ComponentBoundEvent_0_OnClassSelectionConfirm__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_InGameMenu_ClassSelect_K2Node_ComponentBoundEvent_0_OnClassSelectionConfirm__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.OnPendingMenuActionsChanged
	 */
	struct UBP_InGameMenu_C_OnPendingMenuActionsChanged_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_15_OnSettingsSelected__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_15_OnSettingsSelected__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.OnRoundReset
	 */
	struct UBP_InGameMenu_C_OnRoundReset_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_MainMenu_Settings_K2Node_ComponentBoundEvent_0_OnNavigateBack__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_MainMenu_Settings_K2Node_ComponentBoundEvent_0_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.Tick
	 */
	struct UBP_InGameMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_1_OnLessonsSelected__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_1_OnLessonsSelected__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.Destruct
	 */
	struct UBP_InGameMenu_C_Destruct_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_4_OnGoToSelectClass__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_4_OnGoToSelectClass__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_MainMenu_Tutorials_Lessons_K2Node_ComponentBoundEvent_69_OnNavigateBack__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_MainMenu_Tutorials_Lessons_K2Node_ComponentBoundEvent_69_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_MainMenu_Tutorials_Lessons_K2Node_ComponentBoundEvent_30_OnNavigateIngame__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_MainMenu_Tutorials_Lessons_K2Node_ComponentBoundEvent_30_OnNavigateIngame__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_InGameMenu_ClassSelect_K2Node_ComponentBoundEvent_3_OnNavigateBack__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_InGameMenu_ClassSelect_K2Node_ComponentBoundEvent_3_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_InGameMenu_KitSelect_K2Node_ComponentBoundEvent_5_OnNavigateBack__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_InGameMenu_KitSelect_K2Node_ComponentBoundEvent_5_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_InGameMenu_KitSelect_K2Node_ComponentBoundEvent_6_OnUpdateWeight__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_InGameMenu_KitSelect_K2Node_ComponentBoundEvent_6_OnUpdateWeight__DelegateSignature_Params
	{
	public:
		float                                                      WeightValueToShow;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      EquippedWeight;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_8_OnGoToSelectLoadout__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_8_OnGoToSelectLoadout__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BtnWeightInfo_K2Node_ComponentBoundEvent_12_OnHover__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BtnWeightInfo_K2Node_ComponentBoundEvent_12_OnHover__DelegateSignature_Params
	{
	public:
		EConfirmableEvent                                          ButtonEvent;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BtnWeightInfo_K2Node_ComponentBoundEvent_13_OnUnHover__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BtnWeightInfo_K2Node_ComponentBoundEvent_13_OnUnHover__DelegateSignature_Params
	{
	public:
		EConfirmableEvent                                          ButtonEvent;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__DialogLeaveGame_K2Node_ComponentBoundEvent_9_OnConfirmed__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__DialogLeaveGame_K2Node_ComponentBoundEvent_9_OnConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__DialogLeaveGame_K2Node_ComponentBoundEvent_10_OnCanceled__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__DialogLeaveGame_K2Node_ComponentBoundEvent_10_OnCanceled__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_11_OnLeaveGame__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_11_OnLeaveGame__DelegateSignature_Params
	{
	public:
		bool                                                       WantsToQuit;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_InGameMenu_CosmeticSelect_K2Node_ComponentBoundEvent_13_OnConfirmCosmeticPreset__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_InGameMenu_CosmeticSelect_K2Node_ComponentBoundEvent_13_OnConfirmCosmeticPreset__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_InGameMenu_ClassSelect_K2Node_ComponentBoundEvent_14_OnTeamChanged__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_InGameMenu_ClassSelect_K2Node_ComponentBoundEvent_14_OnTeamChanged__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.OnHidePanel
	 */
	struct UBP_InGameMenu_C_OnHidePanel_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.Update
	 */
	struct UBP_InGameMenu_C_Update_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.CloseLeaveGameDialog
	 */
	struct UBP_InGameMenu_C_CloseLeaveGameDialog_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.OnRoundOver
	 */
	struct UBP_InGameMenu_C_OnRoundOver_Params
	{
	public:
		struct FPlayerRoundOverData                                UIData;                                                  // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_InGameMenu_ClassSelect_K2Node_ComponentBoundEvent_17_OnToggleTacticalMap__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_InGameMenu_ClassSelect_K2Node_ComponentBoundEvent_17_OnToggleTacticalMap__DelegateSignature_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_7_OnTryResumeGameBeforeLoadoutConfirmed__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_InGameMenu_Game_K2Node_ComponentBoundEvent_7_OnTryResumeGameBeforeLoadoutConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.BndEvt__BP_InGameMenu_KitSelect_K2Node_ComponentBoundEvent_19_OnClassBack__DelegateSignature
	 */
	struct UBP_InGameMenu_C_BndEvt__BP_InGameMenu_KitSelect_K2Node_ComponentBoundEvent_19_OnClassBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu.BP_InGameMenu_C.ExecuteUbergraph_BP_InGameMenu
	 */
	struct UBP_InGameMenu_C_ExecuteUbergraph_BP_InGameMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
