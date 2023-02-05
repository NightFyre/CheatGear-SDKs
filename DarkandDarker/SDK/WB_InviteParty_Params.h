#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function WB_InviteParty.WB_InviteParty_C.OnMessageReceived_5F95D89141882C5444AE5CA7267AB723
	 */
	struct UWB_InviteParty_C_OnMessageReceived_5F95D89141882C5444AE5CA7267AB723_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.OnPageNumber
	 */
	struct UWB_InviteParty_C_OnPageNumber_Params
	{
	public:
		int32_t                                                    CurrentPage;                                             // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxPage;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.OnLocateNumber
	 */
	struct UWB_InviteParty_C_OnLocateNumber_Params
	{
	public:
		int32_t                                                    LobbyCount;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DungeonCount;                                            // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BlockCount;                                              // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.Construct
	 */
	struct UWB_InviteParty_C_Construct_Params
	{	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.EventFMsgWidgetPopupMessageResponse
	 */
	struct UWB_InviteParty_C_EventFMsgWidgetPopupMessageResponse_Params
	{
	public:
		struct FMsgWidgetPopupMessageResponse                      Msg;                                                     // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.BackButtonClicked
	 */
	struct UWB_InviteParty_C_BackButtonClicked_Params
	{	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_FindUserTextBox_K2Node_ComponentBoundEvent_12_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UWB_InviteParty_C_BndEvt__WB_InviteParty_FindUserTextBox_K2Node_ComponentBoundEvent_12_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_WB_CommonBtn_Arrow_K2Node_ComponentBoundEvent_4_OnVisibilityChangedEvent__DelegateSignature
	 */
	struct UWB_InviteParty_C_BndEvt__WB_InviteParty_WB_CommonBtn_Arrow_K2Node_ComponentBoundEvent_4_OnVisibilityChangedEvent__DelegateSignature_Params
	{
	public:
		ESlateVisibility                                           Invisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_WB_CommonBtn_Arrow_62_K2Node_ComponentBoundEvent_5_OnVisibilityChangedEvent__DelegateSignature
	 */
	struct UWB_InviteParty_C_BndEvt__WB_InviteParty_WB_CommonBtn_Arrow_62_K2Node_ComponentBoundEvent_5_OnVisibilityChangedEvent__DelegateSignature_Params
	{
	public:
		ESlateVisibility                                           Invisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.UserListLeftButtonClicked
	 */
	struct UWB_InviteParty_C_UserListLeftButtonClicked_Params
	{	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.UserListRightButtonClicked
	 */
	struct UWB_InviteParty_C_UserListRightButtonClicked_Params
	{	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.UserListFindIdClicked
	 */
	struct UWB_InviteParty_C_UserListFindIdClicked_Params
	{	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_InvitePartySlotTileView_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature
	 */
	struct UWB_InviteParty_C_BndEvt__WB_InviteParty_InvitePartySlotTileView_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWB_InviteParty_C_BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWB_InviteParty_C_BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_InviteParty_C_BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_InviteParty_C_BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.TryRequestInviteParty
	 */
	struct UWB_InviteParty_C_TryRequestInviteParty_Params
	{
	public:
		class UInvitePartyUserSlotWidgetData*                      InInvitePartyUserSlotWidgetData;                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InviteParty.WB_InviteParty_C.ExecuteUbergraph_WB_InviteParty
	 */
	struct UWB_InviteParty_C_ExecuteUbergraph_WB_InviteParty_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FB30[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
