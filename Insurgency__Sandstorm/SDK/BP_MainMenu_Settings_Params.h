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
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.OnShowGenericDialogWidget
	 */
	struct UBP_MainMenu_Settings_C_OnShowGenericDialogWidget_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.RemoveGenericDialogWidget
	 */
	struct UBP_MainMenu_Settings_C_RemoveGenericDialogWidget_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.OnKeyUp
	 */
	struct UBP_MainMenu_Settings_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.GetVisibiltyLanguage
	 */
	struct UBP_MainMenu_Settings_C_GetVisibiltyLanguage_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.CheckGamepadChange
	 */
	struct UBP_MainMenu_Settings_C_CheckGamepadChange_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.OnFocusReceived
	 */
	struct UBP_MainMenu_Settings_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.OnRequestNavigateBack
	 */
	struct UBP_MainMenu_Settings_C_OnRequestNavigateBack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.RefreshOptionsTabs
	 */
	struct UBP_MainMenu_Settings_C_RefreshOptionsTabs_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.ConfirmNavigateBack
	 */
	struct UBP_MainMenu_Settings_C_ConfirmNavigateBack_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.CheckForUnsavedChanges
	 */
	struct UBP_MainMenu_Settings_C_CheckForUnsavedChanges_Params
	{
	public:
		bool                                                       bUnsavedChanges;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_92PU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.AnyPageHasUnappliedChanges
	 */
	struct UBP_MainMenu_Settings_C_AnyPageHasUnappliedChanges_Params
	{
	public:
		bool                                                       bHasChanges;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2H4H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.CancelUnsavedChanges
	 */
	struct UBP_MainMenu_Settings_C_CancelUnsavedChanges_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.DiscardUnsavedChanges
	 */
	struct UBP_MainMenu_Settings_C_DiscardUnsavedChanges_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.ApplyUnsavedChanges
	 */
	struct UBP_MainMenu_Settings_C_ApplyUnsavedChanges_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.CurrentPageHasUnappliedChanges
	 */
	struct UBP_MainMenu_Settings_C_CurrentPageHasUnappliedChanges_Params
	{
	public:
		bool                                                       bHasChanges;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JYZC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.CheckForApplyChangesVisibility
	 */
	struct UBP_MainMenu_Settings_C_CheckForApplyChangesVisibility_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.GetCurrentMenuPage
	 */
	struct UBP_MainMenu_Settings_C_GetCurrentMenuPage_Params
	{
	public:
		class UOptionsMenu*                                        Menu;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.OnKeyDown
	 */
	struct UBP_MainMenu_Settings_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.OnPageSelected
	 */
	struct UBP_MainMenu_Settings_C_OnPageSelected_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.Construct
	 */
	struct UBP_MainMenu_Settings_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_3_OnTabSelected__DelegateSignature
	 */
	struct UBP_MainMenu_Settings_C_BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_3_OnTabSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.BndEvt__ButtonApplyChanges_K2Node_ComponentBoundEvent_67_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Settings_C_BndEvt__ButtonApplyChanges_K2Node_ComponentBoundEvent_67_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.BndEvt__ButtonReset_K2Node_ComponentBoundEvent_71_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Settings_C_BndEvt__ButtonReset_K2Node_ComponentBoundEvent_71_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.Tick
	 */
	struct UBP_MainMenu_Settings_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Settings_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.ResetToDefaultsConfirmed
	 */
	struct UBP_MainMenu_Settings_C_ResetToDefaultsConfirmed_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.OnPanelOpened
	 */
	struct UBP_MainMenu_Settings_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.OnResetCanceled
	 */
	struct UBP_MainMenu_Settings_C_OnResetCanceled_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.Show Language Select
	 */
	struct UBP_MainMenu_Settings_C_Show_Language_Select_Params
	{	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.BndEvt__BP_LanguageSelect_K2Node_ComponentBoundEvent_1_LanguageApplied__DelegateSignature
	 */
	struct UBP_MainMenu_Settings_C_BndEvt__BP_LanguageSelect_K2Node_ComponentBoundEvent_1_LanguageApplied__DelegateSignature_Params
	{
	public:
		bool                                                       IsNewCulture;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.ExecuteUbergraph_BP_MainMenu_Settings
	 */
	struct UBP_MainMenu_Settings_C_ExecuteUbergraph_BP_MainMenu_Settings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_81JK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.OnShowLanguageSelect__DelegateSignature
	 */
	struct UBP_MainMenu_Settings_C_OnShowLanguageSelect__DelegateSignature_Params
	{
	public:
		bool                                                       bShown;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_Settings.BP_MainMenu_Settings_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_Settings_C_OnNavigateBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
