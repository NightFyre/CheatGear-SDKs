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
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.UpdateTacticalMap
	 */
	struct UBP_InGameMenu_ClassSelect_C_UpdateTacticalMap_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.ToggleTacticalMap
	 */
	struct UBP_InGameMenu_ClassSelect_C_ToggleTacticalMap_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.CreateClassButton
	 */
	struct UBP_InGameMenu_ClassSelect_C_CreateClassButton_Params
	{
	public:
		struct FPlayerClassLimit                                   ClassLimit;                                              // 0x0000(0x0210)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UPlayerClass*                                        PlayerClass;                                             // 0x0210(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATeamInfo*                                           Team;                                                    // 0x0218(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SlotNumber;                                              // 0x0220(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T1QT[0x4];                                   // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBP_ClassSelect_ClassButton_C*                       ClassButton;                                             // 0x0228(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.GetPlayerExperience
	 */
	struct UBP_InGameMenu_ClassSelect_C_GetPlayerExperience_Params
	{
	public:
		int32_t                                                    PlayerExperience;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7A3Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.Get_ToolTipClassLockInfoText_Visibility
	 */
	struct UBP_InGameMenu_ClassSelect_C_Get_ToolTipClassLockInfoText_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.IsClassRestricted
	 */
	struct UBP_InGameMenu_ClassSelect_C_IsClassRestricted_Params
	{
	public:
		struct FPlayerClassLimit                                   ClassLimit;                                              // 0x0000(0x0210)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Result;                                                  // 0x0210(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NDXV[0x3];                                   // 0x0211(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.HideHints
	 */
	struct UBP_InGameMenu_ClassSelect_C_HideHints_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.ToggleHints
	 */
	struct UBP_InGameMenu_ClassSelect_C_ToggleHints_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnKeyDown
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnFocusReceived
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.PopulateMutatorList
	 */
	struct UBP_InGameMenu_ClassSelect_C_PopulateMutatorList_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.UpdateTeamSelection
	 */
	struct UBP_InGameMenu_ClassSelect_C_UpdateTeamSelection_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.CheckForPlayerStateReplication
	 */
	struct UBP_InGameMenu_ClassSelect_C_CheckForPlayerStateReplication_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BindPlayerControllerDelegates
	 */
	struct UBP_InGameMenu_ClassSelect_C_BindPlayerControllerDelegates_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.SetIsUsingGamepad
	 */
	struct UBP_InGameMenu_ClassSelect_C_SetIsUsingGamepad_Params
	{
	public:
		bool                                                       bUsingController;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EeInputIconType                                            IconType;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BHFJ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.LoadMapOverview
	 */
	struct UBP_InGameMenu_ClassSelect_C_LoadMapOverview_Params
	{
	public:
		bool                                                       Loaded;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FLUI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.GetTeamIconVisibility
	 */
	struct UBP_InGameMenu_ClassSelect_C_GetTeamIconVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.CheckForGameStateReplication
	 */
	struct UBP_InGameMenu_ClassSelect_C_CheckForGameStateReplication_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.RefreshCurrentClassInfo
	 */
	struct UBP_InGameMenu_ClassSelect_C_RefreshCurrentClassInfo_Params
	{
	public:
		class UPlayerClass*                                        Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Slot;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_53HY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerClassLimit                                   ClassLimit;                                              // 0x0010(0x0210)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.PopulateGameRuleList
	 */
	struct UBP_InGameMenu_ClassSelect_C_PopulateGameRuleList_Params
	{
	public:
		bool                                                       Completed;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZOWN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.RestoreKeyboardListFocus
	 */
	struct UBP_InGameMenu_ClassSelect_C_RestoreKeyboardListFocus_Params
	{
	public:
		class UPanelWidget*                                        VerticalBox;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CY5A[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.GetFocusedListIndex
	 */
	struct UBP_InGameMenu_ClassSelect_C_GetFocusedListIndex_Params
	{
	public:
		class UPanelWidget*                                        Panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnNavigateFromConfirm
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnNavigateFromConfirm_Params
	{
	public:
		class UWidget*                                             WidgetToFocus;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnNavigateToConfirm
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnNavigateToConfirm_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnCustomNavigation
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.GetFirstButton
	 */
	struct UBP_InGameMenu_ClassSelect_C_GetFirstButton_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.Get_ConfirmButton_bIsEnabled_1
	 */
	struct UBP_InGameMenu_ClassSelect_C_Get_ConfirmButton_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ASHW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.PopulateClasses
	 */
	struct UBP_InGameMenu_ClassSelect_C_PopulateClasses_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.PopulateTeams
	 */
	struct UBP_InGameMenu_ClassSelect_C_PopulateTeams_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.Construct
	 */
	struct UBP_InGameMenu_ClassSelect_C_Construct_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnTeamButtonPressed
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnTeamButtonPressed_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnPlayerTeamChanged
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnPlayerTeamChanged_Params
	{
	public:
		unsigned char                                              FactionId;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XG31[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATeamInfo*                                           FactionInfo;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnClassButtonPressed
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnClassButtonPressed_Params
	{
	public:
		class UPlayerClass*                                        Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClassSlot;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnPlayerClassChanged
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnPlayerClassChanged_Params
	{
	public:
		class UPlayerClass*                                        NewClass;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnPanelOpened
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_InGameMenu_ClassSelect_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnClassButtonHoverChanged
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnClassButtonHoverChanged_Params
	{
	public:
		class UPlayerClass*                                        Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClassSlot;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HoverValue;                                              // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E8G7[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerClassLimit                                   PlayerClassLimit;                                        // 0x0010(0x0210)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnRefreshTeams
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnRefreshTeams_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_InGameMenu_ClassSelect_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BndEvt__BP_GametypeInfoButton_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature
	 */
	struct UBP_InGameMenu_ClassSelect_C_BndEvt__BP_GametypeInfoButton_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature_Params
	{
	public:
		EConfirmableEvent                                          ButtonEvent;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BndEvt__BP_GametypeInfoButton_K2Node_ComponentBoundEvent_3_OnUnHover__DelegateSignature
	 */
	struct UBP_InGameMenu_ClassSelect_C_BndEvt__BP_GametypeInfoButton_K2Node_ComponentBoundEvent_3_OnUnHover__DelegateSignature_Params
	{
	public:
		EConfirmableEvent                                          ButtonEvent;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnPanelClosed
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnPanelClosed_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BndEvt__BtnToggleTacticalMap_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
	 */
	struct UBP_InGameMenu_ClassSelect_C_BndEvt__BtnToggleTacticalMap_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnRemovedFromFocusPath
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.CustomEvent_1
	 */
	struct UBP_InGameMenu_ClassSelect_C_CustomEvent_1_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.ExecuteUbergraph_BP_InGameMenu_ClassSelect
	 */
	struct UBP_InGameMenu_ClassSelect_C_ExecuteUbergraph_BP_InGameMenu_ClassSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnToggleTacticalMap__DelegateSignature
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnToggleTacticalMap__DelegateSignature_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnTeamChanged__DelegateSignature
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnTeamChanged__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnClassSelectionConfirm__DelegateSignature
	 */
	struct UBP_InGameMenu_ClassSelect_C_OnClassSelectionConfirm__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
