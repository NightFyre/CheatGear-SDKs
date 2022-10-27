/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.ChangeButtonVisibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PartyMemberContextMenu_C::ChangeButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.ChangeButtonVisibility");
		
		UBP_PartyMemberContextMenu_C_ChangeButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.Get_ContextMenuArrowBox_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_PartyMemberContextMenu_C::Get_ContextMenuArrowBox_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.Get_ContextMenuArrowBox_Visibility_1");
		
		UBP_PartyMemberContextMenu_C_Get_ContextMenuArrowBox_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.SetDetails
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLocal                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InUserNetId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_PartyMemberContextMenu_C::SetDetails(bool IsLocal, const class FString& PlayerName, const class FString& InUserNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.SetDetails");
		
		UBP_PartyMemberContextMenu_C_SetDetails_Params params {};
		params.IsLocal = IsLocal;
		params.PlayerName = PlayerName;
		params.InUserNetId = InUserNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_PartyMemberContextMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnFocusReceived");
		
		UBP_PartyMemberContextMenu_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.BndEvt__Btn_LeaveParty_K2Node_ComponentBoundEvent_15_OnCicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PartyMemberContextMenu_C::BndEvt__Btn_LeaveParty_K2Node_ComponentBoundEvent_15_OnCicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.BndEvt__Btn_LeaveParty_K2Node_ComponentBoundEvent_15_OnCicked__DelegateSignature");
		
		UBP_PartyMemberContextMenu_C_BndEvt__Btn_LeaveParty_K2Node_ComponentBoundEvent_15_OnCicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.BndEvt__Btn_PromoteToLeader_K2Node_ComponentBoundEvent_16_OnCicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PartyMemberContextMenu_C::BndEvt__Btn_PromoteToLeader_K2Node_ComponentBoundEvent_16_OnCicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.BndEvt__Btn_PromoteToLeader_K2Node_ComponentBoundEvent_16_OnCicked__DelegateSignature");
		
		UBP_PartyMemberContextMenu_C_BndEvt__Btn_PromoteToLeader_K2Node_ComponentBoundEvent_16_OnCicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.BndEvt__Btn_KickPlayer_K2Node_ComponentBoundEvent_14_OnCicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PartyMemberContextMenu_C::BndEvt__Btn_KickPlayer_K2Node_ComponentBoundEvent_14_OnCicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.BndEvt__Btn_KickPlayer_K2Node_ComponentBoundEvent_14_OnCicked__DelegateSignature");
		
		UBP_PartyMemberContextMenu_C_BndEvt__Btn_KickPlayer_K2Node_ComponentBoundEvent_14_OnCicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_PartyMemberContextMenu_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnAddedToFocusPath");
		
		UBP_PartyMemberContextMenu_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_PartyMemberContextMenu_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnRemovedFromFocusPath");
		
		UBP_PartyMemberContextMenu_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_PartyMemberContextMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.Construct");
		
		UBP_PartyMemberContextMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.BndEvt__BtnShowProfile_K2Node_ComponentBoundEvent_0_OnCicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PartyMemberContextMenu_C::BndEvt__BtnShowProfile_K2Node_ComponentBoundEvent_0_OnCicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.BndEvt__BtnShowProfile_K2Node_ComponentBoundEvent_0_OnCicked__DelegateSignature");
		
		UBP_PartyMemberContextMenu_C_BndEvt__BtnShowProfile_K2Node_ComponentBoundEvent_0_OnCicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.BndEvt__BtnShowProfile_1_K2Node_ComponentBoundEvent_1_OnCicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PartyMemberContextMenu_C::BndEvt__BtnShowProfile_1_K2Node_ComponentBoundEvent_1_OnCicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.BndEvt__BtnShowProfile_1_K2Node_ComponentBoundEvent_1_OnCicked__DelegateSignature");
		
		UBP_PartyMemberContextMenu_C_BndEvt__BtnShowProfile_1_K2Node_ComponentBoundEvent_1_OnCicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.ExecuteUbergraph_BP_PartyMemberContextMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PartyMemberContextMenu_C::ExecuteUbergraph_BP_PartyMemberContextMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.ExecuteUbergraph_BP_PartyMemberContextMenu");
		
		UBP_PartyMemberContextMenu_C_ExecuteUbergraph_BP_PartyMemberContextMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnFocused__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PartyMemberContextMenu_C::OnFocused__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnFocused__DelegateSignature");
		
		UBP_PartyMemberContextMenu_C_OnFocused__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnKickPlayer__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      User_Net_Id                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_PartyMemberContextMenu_C::OnKickPlayer__DelegateSignature(const class FString& User_Net_Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnKickPlayer__DelegateSignature");
		
		UBP_PartyMemberContextMenu_C_OnKickPlayer__DelegateSignature_Params params {};
		params.User_Net_Id = User_Net_Id;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnPromotePlayer__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      UserNetId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_PartyMemberContextMenu_C::OnPromotePlayer__DelegateSignature(const class FString& UserNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnPromotePlayer__DelegateSignature");
		
		UBP_PartyMemberContextMenu_C_OnPromotePlayer__DelegateSignature_Params params {};
		params.UserNetId = UserNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnLeaveParty__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PartyMemberContextMenu_C::OnLeaveParty__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnLeaveParty__DelegateSignature");
		
		UBP_PartyMemberContextMenu_C_OnLeaveParty__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnLeaveFocusPath__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PartyMemberContextMenu_C::OnLeaveFocusPath__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnLeaveFocusPath__DelegateSignature");
		
		UBP_PartyMemberContextMenu_C_OnLeaveFocusPath__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PartyMemberContextMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PartyMemberContextMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C");
		return ptr;
	}

}


