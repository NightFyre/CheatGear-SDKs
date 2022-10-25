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
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.OnRestrictionDialogClosed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MessageOfTheDay_C::OnRestrictionDialogClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.OnRestrictionDialogClosed");
		
		UBP_MessageOfTheDay_C_OnRestrictionDialogClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.ReactOnPrivilageResult
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUserPrivilegeResult                               Privilege_Result                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MessageOfTheDay_C::ReactOnPrivilageResult(EUserPrivilegeResult Privilege_Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.ReactOnPrivilageResult");
		
		UBP_MessageOfTheDay_C_ReactOnPrivilageResult_Params params {};
		params.Privilege_Result = Privilege_Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.CheckUserPrivileges
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MessageOfTheDay_C::CheckUserPrivileges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.CheckUserPrivileges");
		
		UBP_MessageOfTheDay_C_CheckUserPrivileges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.Set Navigation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MessageOfTheDay_C::Set_Navigation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.Set Navigation");
		
		UBP_MessageOfTheDay_C_Set_Navigation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.OnAnalogValueChanged
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_MessageOfTheDay_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.OnAnalogValueChanged");
		
		UBP_MessageOfTheDay_C_OnAnalogValueChanged_Params params {};
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.SetUpdateInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMotdUpdateMessage                          NewUpdateMessage                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MessageOfTheDay_C::SetUpdateInfo(const struct FMotdUpdateMessage& NewUpdateMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.SetUpdateInfo");
		
		UBP_MessageOfTheDay_C_SetUpdateInfo_Params params {};
		params.NewUpdateMessage = NewUpdateMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.InitDefaultUpdateInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MessageOfTheDay_C::InitDefaultUpdateInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.InitDefaultUpdateInfo");
		
		UBP_MessageOfTheDay_C_InitDefaultUpdateInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.OnMotdReceived_895ACECF4668C5074215349445AF6748
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMotdData                                   Motd                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_MessageOfTheDay_C::OnMotdReceived_895ACECF4668C5074215349445AF6748(const struct FMotdData& Motd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.OnMotdReceived_895ACECF4668C5074215349445AF6748");
		
		UBP_MessageOfTheDay_C_OnMotdReceived_895ACECF4668C5074215349445AF6748_Params params {};
		params.Motd = Motd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.BndEvt__MotdLinkButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MessageOfTheDay_C::BndEvt__MotdLinkButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.BndEvt__MotdLinkButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
		
		UBP_MessageOfTheDay_C_BndEvt__MotdLinkButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.BndEvt__ReviewButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MessageOfTheDay_C::BndEvt__ReviewButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.BndEvt__ReviewButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBP_MessageOfTheDay_C_BndEvt__ReviewButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.BndEvt__CallToActionButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MessageOfTheDay_C::BndEvt__CallToActionButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.BndEvt__CallToActionButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");
		
		UBP_MessageOfTheDay_C_BndEvt__CallToActionButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.OnPlatformConnectionStatusChangedDelegate_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bConnected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MessageOfTheDay_C::OnPlatformConnectionStatusChangedDelegate_Event(bool bConnected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.OnPlatformConnectionStatusChangedDelegate_Event");
		
		UBP_MessageOfTheDay_C_OnPlatformConnectionStatusChangedDelegate_Event_Params params {};
		params.bConnected = bConnected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MessageOfTheDay_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.Destruct");
		
		UBP_MessageOfTheDay_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MessageOfTheDay_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");
		
		UBP_MessageOfTheDay_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MessageOfTheDay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.Construct");
		
		UBP_MessageOfTheDay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.DisplayRestrictionDialog
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUserPrivilegeResult                               PrivilageRestriction                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MessageOfTheDay_C::DisplayRestrictionDialog(EUserPrivilegeResult PrivilageRestriction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.DisplayRestrictionDialog");
		
		UBP_MessageOfTheDay_C_DisplayRestrictionDialog_Params params {};
		params.PrivilageRestriction = PrivilageRestriction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.ExecuteUbergraph_BP_MessageOfTheDay
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MessageOfTheDay_C::ExecuteUbergraph_BP_MessageOfTheDay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.ExecuteUbergraph_BP_MessageOfTheDay");
		
		UBP_MessageOfTheDay_C_ExecuteUbergraph_BP_MessageOfTheDay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MessageOfTheDay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MessageOfTheDay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MessageOfTheDay.BP_MessageOfTheDay_C");
		return ptr;
	}

}


