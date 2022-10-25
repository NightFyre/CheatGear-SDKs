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
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.HasServicesLinked
	 */
	struct UBP_MenuPartyWidget_C_HasServicesLinked_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.CreateParty
	 */
	struct UBP_MenuPartyWidget_C_CreateParty_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnServiceLoginComplete
	 */
	struct UBP_MenuPartyWidget_C_OnServiceLoginComplete_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W2IM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                InServiceName;                                           // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q720[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BP_MenuPartyWidget_AutoGenFunc2
	 */
	struct UBP_MenuPartyWidget_C_BP_MenuPartyWidget_AutoGenFunc2_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnCustomNavigation
	 */
	struct UBP_MenuPartyWidget_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.CreateMapDownloadingDialog
	 */
	struct UBP_MenuPartyWidget_C_CreateMapDownloadingDialog_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.Get_IconLockImage_Visibility_1
	 */
	struct UBP_MenuPartyWidget_C_Get_IconLockImage_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7KHR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BP_MenuPartyWidget_AutoGenFunc1
	 */
	struct UBP_MenuPartyWidget_C_BP_MenuPartyWidget_AutoGenFunc1_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateLicenseWidget
	 */
	struct UBP_MenuPartyWidget_C_UpdateLicenseWidget_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnConfirmedRestrictions
	 */
	struct UBP_MenuPartyWidget_C_OnConfirmedRestrictions_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateRestrictionWidget
	 */
	struct UBP_MenuPartyWidget_C_UpdateRestrictionWidget_Params
	{
	public:
		class FText                                                InConfirmableText;                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateWaitingWidget
	 */
	struct UBP_MenuPartyWidget_C_UpdateWaitingWidget_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BP_MenuPartyWidget_AutoGenFunc
	 */
	struct UBP_MenuPartyWidget_C_BP_MenuPartyWidget_AutoGenFunc_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnKeyDown
	 */
	struct UBP_MenuPartyWidget_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPartyMemberSelected
	 */
	struct UBP_MenuPartyWidget_C_OnPartyMemberSelected_Params
	{
	public:
		bool                                                       bIsLocalPlayer;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLeader;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GJL1[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              UserNetId;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              PlayerName;                                              // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.ChangeButtonsVisibilityForPlatform
	 */
	struct UBP_MenuPartyWidget_C_ChangeButtonsVisibilityForPlatform_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnFocusReceived
	 */
	struct UBP_MenuPartyWidget_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.GetCreateButtonForegroundColor
	 */
	struct UBP_MenuPartyWidget_C_GetCreateButtonForegroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.GetCreateButtonBackgroundColor
	 */
	struct UBP_MenuPartyWidget_C_GetCreateButtonBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.GetInviteButtonForegroundColor
	 */
	struct UBP_MenuPartyWidget_C_GetInviteButtonForegroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.GetInviteButtonBackgroundColor
	 */
	struct UBP_MenuPartyWidget_C_GetInviteButtonBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.ClearParty
	 */
	struct UBP_MenuPartyWidget_C_ClearParty_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.PopulatePartyFromState
	 */
	struct UBP_MenuPartyWidget_C_PopulatePartyFromState_Params
	{
	public:
		struct FINSPartyState                                      State;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPartyStateUpdate
	 */
	struct UBP_MenuPartyWidget_C_OnPartyStateUpdate_Params
	{
	public:
		struct FINSPartyState                                      State;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FPartySettings                                      Settings;                                                // 0x0018(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPartyLeft
	 */
	struct UBP_MenuPartyWidget_C_OnPartyLeft_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPartyJoined
	 */
	struct UBP_MenuPartyWidget_C_OnPartyJoined_Params
	{
	public:
		struct FINSPartyState                                      State;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.PreConstruct
	 */
	struct UBP_MenuPartyWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.Construct
	 */
	struct UBP_MenuPartyWidget_C_Construct_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_BndEvt__CreatePartyBtn_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_7_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_7_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_8_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_BndEvt__InviteToPartyBtn_K2Node_ComponentBoundEvent_8_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnLeaveParty
	 */
	struct UBP_MenuPartyWidget_C_OnLeaveParty_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPlayerPromoted
	 */
	struct UBP_MenuPartyWidget_C_OnPlayerPromoted_Params
	{
	public:
		class FString                                              UserNetId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnContextFocusLost
	 */
	struct UBP_MenuPartyWidget_C_OnContextFocusLost_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnRemovedFromFocusPath
	 */
	struct UBP_MenuPartyWidget_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateWaitingDialogInfoBP
	 */
	struct UBP_MenuPartyWidget_C_UpdateWaitingDialogInfoBP_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateRestrictionDialogInfoBP
	 */
	struct UBP_MenuPartyWidget_C_UpdateRestrictionDialogInfoBP_Params
	{
	public:
		class FText                                                InConfirmableText;                                       // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPlayerKicked
	 */
	struct UBP_MenuPartyWidget_C_OnPlayerKicked_Params
	{
	public:
		class FString                                              User_Net_Id;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnFocusLost
	 */
	struct UBP_MenuPartyWidget_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateLicenseAgreementDialogBP
	 */
	struct UBP_MenuPartyWidget_C_UpdateLicenseAgreementDialogBP_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnAddedToFocusPath
	 */
	struct UBP_MenuPartyWidget_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnConsoleContextMenuClosed
	 */
	struct UBP_MenuPartyWidget_C_OnConsoleContextMenuClosed_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.Tick
	 */
	struct UBP_MenuPartyWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__BP_PartyMemberContextMenu_K2Node_ComponentBoundEvent_9_OnFocused__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_BndEvt__BP_PartyMemberContextMenu_K2Node_ComponentBoundEvent_9_OnFocused__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.DelayForFocusSound
	 */
	struct UBP_MenuPartyWidget_C_DelayForFocusSound_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.UpdateReturningDialogInfoBP
	 */
	struct UBP_MenuPartyWidget_C_UpdateReturningDialogInfoBP_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnMouseLeave
	 */
	struct UBP_MenuPartyWidget_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__BP_LocalPlayerAvatar_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_BndEvt__BP_LocalPlayerAvatar_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__BP_LocalPlayerAvatar_K2Node_ComponentBoundEvent_12_OnUnhovered__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_BndEvt__BP_LocalPlayerAvatar_K2Node_ComponentBoundEvent_12_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__BP_PartyMemberContextMenu_K2Node_ComponentBoundEvent_13_OnLeaveParty__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_BndEvt__BP_PartyMemberContextMenu_K2Node_ComponentBoundEvent_13_OnLeaveParty__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__LeavePartyBtn_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_BndEvt__LeavePartyBtn_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.BndEvt__BP_INSSwitcher_K2Node_ComponentBoundEvent_10_OnPlatformSelected__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_BndEvt__BP_INSSwitcher_K2Node_ComponentBoundEvent_10_OnPlatformSelected__DelegateSignature_Params
	{
	public:
		class FText                                                SelectedText;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnPartyCreatedByUser
	 */
	struct UBP_MenuPartyWidget_C_OnPartyCreatedByUser_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnLicenseCanceled
	 */
	struct UBP_MenuPartyWidget_C_OnLicenseCanceled_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnLicenseConfirmed
	 */
	struct UBP_MenuPartyWidget_C_OnLicenseConfirmed_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.ExecuteUbergraph_BP_MenuPartyWidget
	 */
	struct UBP_MenuPartyWidget_C_ExecuteUbergraph_BP_MenuPartyWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnLeaveFromParty__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_OnLeaveFromParty__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnUnhoverPartyMember__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_OnUnhoverPartyMember__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnHoverPartyMember__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_OnHoverPartyMember__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnUnhoveredParty__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_OnUnhoveredParty__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnHoveredParty__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_OnHoveredParty__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnUnhovered__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuPartyWidget.BP_MenuPartyWidget_C.OnHovered__DelegateSignature
	 */
	struct UBP_MenuPartyWidget_C_OnHovered__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
