/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.OnMessageReceived_5F95D89141882C5444AE5CA7267AB723
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InviteParty_C::OnMessageReceived_5F95D89141882C5444AE5CA7267AB723(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.OnMessageReceived_5F95D89141882C5444AE5CA7267AB723");
		
		UWB_InviteParty_C_OnMessageReceived_5F95D89141882C5444AE5CA7267AB723_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.OnPageNumber
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentPage                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxPage                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InviteParty_C::OnPageNumber(int32_t CurrentPage, int32_t MaxPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.OnPageNumber");
		
		UWB_InviteParty_C_OnPageNumber_Params params {};
		params.CurrentPage = CurrentPage;
		params.MaxPage = MaxPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.OnLocateNumber
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LobbyCount                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DungeonCount                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BlockCount                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InviteParty_C::OnLocateNumber(int32_t LobbyCount, int32_t DungeonCount, int32_t BlockCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.OnLocateNumber");
		
		UWB_InviteParty_C_OnLocateNumber_Params params {};
		params.LobbyCount = LobbyCount;
		params.DungeonCount = DungeonCount;
		params.BlockCount = BlockCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_InviteParty_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.Construct");
		
		UWB_InviteParty_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.EventFMsgWidgetPopupMessageResponse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgWidgetPopupMessageResponse              Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_InviteParty_C::EventFMsgWidgetPopupMessageResponse(const struct FMsgWidgetPopupMessageResponse& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.EventFMsgWidgetPopupMessageResponse");
		
		UWB_InviteParty_C_EventFMsgWidgetPopupMessageResponse_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.BackButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_InviteParty_C::BackButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.BackButtonClicked");
		
		UWB_InviteParty_C_BackButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_FindUserTextBox_K2Node_ComponentBoundEvent_12_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_InviteParty_C::BndEvt__WB_InviteParty_FindUserTextBox_K2Node_ComponentBoundEvent_12_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_FindUserTextBox_K2Node_ComponentBoundEvent_12_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UWB_InviteParty_C_BndEvt__WB_InviteParty_FindUserTextBox_K2Node_ComponentBoundEvent_12_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_WB_CommonBtn_Arrow_K2Node_ComponentBoundEvent_4_OnVisibilityChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   Invisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InviteParty_C::BndEvt__WB_InviteParty_WB_CommonBtn_Arrow_K2Node_ComponentBoundEvent_4_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility Invisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_WB_CommonBtn_Arrow_K2Node_ComponentBoundEvent_4_OnVisibilityChangedEvent__DelegateSignature");
		
		UWB_InviteParty_C_BndEvt__WB_InviteParty_WB_CommonBtn_Arrow_K2Node_ComponentBoundEvent_4_OnVisibilityChangedEvent__DelegateSignature_Params params {};
		params.Invisibility = Invisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_WB_CommonBtn_Arrow_62_K2Node_ComponentBoundEvent_5_OnVisibilityChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   Invisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InviteParty_C::BndEvt__WB_InviteParty_WB_CommonBtn_Arrow_62_K2Node_ComponentBoundEvent_5_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility Invisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_WB_CommonBtn_Arrow_62_K2Node_ComponentBoundEvent_5_OnVisibilityChangedEvent__DelegateSignature");
		
		UWB_InviteParty_C_BndEvt__WB_InviteParty_WB_CommonBtn_Arrow_62_K2Node_ComponentBoundEvent_5_OnVisibilityChangedEvent__DelegateSignature_Params params {};
		params.Invisibility = Invisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.UserListLeftButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_InviteParty_C::UserListLeftButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.UserListLeftButtonClicked");
		
		UWB_InviteParty_C_UserListLeftButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.UserListRightButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_InviteParty_C::UserListRightButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.UserListRightButtonClicked");
		
		UWB_InviteParty_C_UserListRightButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.UserListFindIdClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_InviteParty_C::UserListFindIdClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.UserListFindIdClicked");
		
		UWB_InviteParty_C_UserListFindIdClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_InvitePartySlotTileView_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InviteParty_C::BndEvt__WB_InviteParty_InvitePartySlotTileView_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_InvitePartySlotTileView_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature");
		
		UWB_InviteParty_C_BndEvt__WB_InviteParty_InvitePartySlotTileView_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_InviteParty_C::BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UWB_InviteParty_C_BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_InviteParty_C::BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");
		
		UWB_InviteParty_C_BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_InviteParty_C::BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UWB_InviteParty_C_BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_InviteParty_C::BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UWB_InviteParty_C_BndEvt__WB_InviteParty_PartyPrivacyButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.TryRequestInviteParty
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInvitePartyUserSlotWidgetData*              InInvitePartyUserSlotWidgetData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InviteParty_C::TryRequestInviteParty(class UInvitePartyUserSlotWidgetData* InInvitePartyUserSlotWidgetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.TryRequestInviteParty");
		
		UWB_InviteParty_C_TryRequestInviteParty_Params params {};
		params.InInvitePartyUserSlotWidgetData = InInvitePartyUserSlotWidgetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InviteParty.WB_InviteParty_C.ExecuteUbergraph_WB_InviteParty
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InviteParty_C::ExecuteUbergraph_WB_InviteParty(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InviteParty.WB_InviteParty_C.ExecuteUbergraph_WB_InviteParty");
		
		UWB_InviteParty_C_ExecuteUbergraph_WB_InviteParty_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_InviteParty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_InviteParty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_InviteParty.WB_InviteParty_C");
		return ptr;
	}

}


