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
	 * Function BP_PlayMenu.BP_PlayMenu_C.Create Map Downloading Dialog
	 */
	struct UBP_PlayMenu_C_Create_Map_Downloading_Dialog_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OnLicenseConfirmed
	 */
	struct UBP_PlayMenu_C_OnLicenseConfirmed_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.UpdateLicenseWidget
	 */
	struct UBP_PlayMenu_C_UpdateLicenseWidget_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.HideCompetetiveOnConsole
	 */
	struct UBP_PlayMenu_C_HideCompetetiveOnConsole_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.DisplayWaitingDialog
	 */
	struct UBP_PlayMenu_C_DisplayWaitingDialog_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OnClosedAccountRestrictionDialog
	 */
	struct UBP_PlayMenu_C_OnClosedAccountRestrictionDialog_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.DisplayAccountRestrictionDialog
	 */
	struct UBP_PlayMenu_C_DisplayAccountRestrictionDialog_Params
	{
	public:
		EUserPrivilegeResult                                       PrivilegeResult;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VRL4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.GetCollapsedVisibilityOnConsole
	 */
	struct UBP_PlayMenu_C_GetCollapsedVisibilityOnConsole_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OnKeyUp
	 */
	struct UBP_PlayMenu_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OnMatchRegionsConfirmed
	 */
	struct UBP_PlayMenu_C_OnMatchRegionsConfirmed_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.SkipTrainingAndAdvance
	 */
	struct UBP_PlayMenu_C_SkipTrainingAndAdvance_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.SwitchToTraining
	 */
	struct UBP_PlayMenu_C_SwitchToTraining_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OpenModalPromptTutorial
	 */
	struct UBP_PlayMenu_C_OpenModalPromptTutorial_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.BeginMatchmakingInPlaylists
	 */
	struct UBP_PlayMenu_C_BeginMatchmakingInPlaylists_Params
	{
	public:
		TArray<class UPlaylist*>                                   InputPin;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       bSkipTutorial;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.HasActiveModal
	 */
	struct UBP_PlayMenu_C_HasActiveModal_Params
	{
	public:
		bool                                                       HasModal;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OpenModalRegionSelection
	 */
	struct UBP_PlayMenu_C_OpenModalRegionSelection_Params
	{
	public:
		bool                                                       bContinueButton;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OnFocusReceived
	 */
	struct UBP_PlayMenu_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.CloseModal
	 */
	struct UBP_PlayMenu_C_CloseModal_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OpenModalPlaylistFeatures
	 */
	struct UBP_PlayMenu_C_OpenModalPlaylistFeatures_Params
	{
	public:
		class UPlaylist*                                           Playlist;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OnPlaylistBrowserHovered
	 */
	struct UBP_PlayMenu_C_OnPlaylistBrowserHovered_Params
	{
	public:
		class UPlaylist*                                           Playlist;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.ClosePlaylistBrowser
	 */
	struct UBP_PlayMenu_C_ClosePlaylistBrowser_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OpenPlaylistType
	 */
	struct UBP_PlayMenu_C_OpenPlaylistType_Params
	{
	public:
		EPlaylistType                                              Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F351[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.UpdateRegionPreferences
	 */
	struct UBP_PlayMenu_C_UpdateRegionPreferences_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.GetRegionText
	 */
	struct UBP_PlayMenu_C_GetRegionText_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.Get_RegionList_Text
	 */
	struct UBP_PlayMenu_C_Get_RegionList_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.UpdateBreadcrumbs
	 */
	struct UBP_PlayMenu_C_UpdateBreadcrumbs_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.GetInitialFocusTarget
	 */
	struct UBP_PlayMenu_C_GetInitialFocusTarget_Params
	{
	public:
		class UWidget*                                             Output;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.Get_PlayerName_Text_1
	 */
	struct UBP_PlayMenu_C_Get_PlayerName_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_6_OnFeatureSelected__DelegateSignature
	 */
	struct UBP_PlayMenu_C_BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_6_OnFeatureSelected__DelegateSignature_Params
	{
	public:
		class UPlaylist*                                           Playlist;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__ScenarioPreferences_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature
	 */
	struct UBP_PlayMenu_C_BndEvt__ScenarioPreferences_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__RegionConfigButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_PlayMenu_C_BndEvt__RegionConfigButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_9_OnFindGameRequested__DelegateSignature
	 */
	struct UBP_PlayMenu_C_BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_9_OnFindGameRequested__DelegateSignature_Params
	{
	public:
		TArray<class UPlaylist*>                                   Playlist;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_10_OnPlaylistHovered__DelegateSignature
	 */
	struct UBP_PlayMenu_C_BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_10_OnPlaylistHovered__DelegateSignature_Params
	{
	public:
		class UPlaylist*                                           Playlist;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OnPanelClosed
	 */
	struct UBP_PlayMenu_C_OnPanelClosed_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.DisplayRestrictionDialog
	 */
	struct UBP_PlayMenu_C_DisplayRestrictionDialog_Params
	{
	public:
		EUserPrivilegeResult                                       PrivilageRestriction;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.EventOnPlatformConnectionStatusChangedDelegate
	 */
	struct UBP_PlayMenu_C_EventOnPlatformConnectionStatusChangedDelegate_Params
	{
	public:
		bool                                                       bConnected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__ColumnVersus_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
	 */
	struct UBP_PlayMenu_C_BndEvt__ColumnVersus_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__BtnRegionPrefGamepad_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
	 */
	struct UBP_PlayMenu_C_BndEvt__BtnRegionPrefGamepad_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__ColumnCoop_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 */
	struct UBP_PlayMenu_C_BndEvt__ColumnCoop_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.UpdateLicenseAgreementDialogBP
	 */
	struct UBP_PlayMenu_C_UpdateLicenseAgreementDialogBP_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OnPanelOpened
	 */
	struct UBP_PlayMenu_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UBP_PlayMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.CheckUpdate
	 */
	struct UBP_PlayMenu_C_CheckUpdate_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLocalReady;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__BP_MP_PlaylistTypeColumn_C_2_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_PlayMenu_C_BndEvt__BP_MP_PlaylistTypeColumn_C_2_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.Construct
	 */
	struct UBP_PlayMenu_C_Construct_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.ExecuteUbergraph_BP_PlayMenu
	 */
	struct UBP_PlayMenu_C_ExecuteUbergraph_BP_PlayMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OnModalPopupClosed__DelegateSignature
	 */
	struct UBP_PlayMenu_C_OnModalPopupClosed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OnModalPopupOpened__DelegateSignature
	 */
	struct UBP_PlayMenu_C_OnModalPopupOpened__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OnMenuPageSelected__DelegateSignature
	 */
	struct UBP_PlayMenu_C_OnMenuPageSelected__DelegateSignature_Params
	{
	public:
		EnumMainMenuPage                                           PageName;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OnCustomGameCreate__DelegateSignature
	 */
	struct UBP_PlayMenu_C_OnCustomGameCreate__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.BreadcrumbsUpdated__DelegateSignature
	 */
	struct UBP_PlayMenu_C_BreadcrumbsUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_PlayMenu_C_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlayMenu.BP_PlayMenu_C.OnOpenServerBrowser__DelegateSignature
	 */
	struct UBP_PlayMenu_C_OnOpenServerBrowser__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
