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
	 * 		Name   -> Function BP_RegionSelectModal.BP_RegionSelectModal_C.UpdateContinueButtonVisibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RegionSelectModal_C::UpdateContinueButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RegionSelectModal.BP_RegionSelectModal_C.UpdateContinueButtonVisibility");
		
		UBP_RegionSelectModal_C_UpdateContinueButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_RegionSelectModal_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnKeyUp");
		
		UBP_RegionSelectModal_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_RegionSelectModal_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnFocusReceived");
		
		UBP_RegionSelectModal_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnRegionHovered
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RegionSelectModal_C::OnRegionHovered(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnRegionHovered");
		
		UBP_RegionSelectModal_C_OnRegionHovered_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnRegionToggled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RegionSelectModal_C::OnRegionToggled(const class FName& Key, bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnRegionToggled");
		
		UBP_RegionSelectModal_C_OnRegionToggled_Params params {};
		params.Key = Key;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RegionSelectModal.BP_RegionSelectModal_C.BuildRegionList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RegionSelectModal_C::BuildRegionList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RegionSelectModal.BP_RegionSelectModal_C.BuildRegionList");
		
		UBP_RegionSelectModal_C_BuildRegionList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RegionSelectModal.BP_RegionSelectModal_C.BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_RegionSelectModal_C::BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RegionSelectModal.BP_RegionSelectModal_C.BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");
		
		UBP_RegionSelectModal_C_BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RegionSelectModal.BP_RegionSelectModal_C.BndEvt__BtnContinue_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_RegionSelectModal_C::BndEvt__BtnContinue_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RegionSelectModal.BP_RegionSelectModal_C.BndEvt__BtnContinue_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UBP_RegionSelectModal_C_BndEvt__BtnContinue_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_RegionSelectModal_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnRemovedFromFocusPath");
		
		UBP_RegionSelectModal_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RegionSelectModal.BP_RegionSelectModal_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_RegionSelectModal_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RegionSelectModal.BP_RegionSelectModal_C.Construct");
		
		UBP_RegionSelectModal_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RegionSelectModal.BP_RegionSelectModal_C.ExecuteUbergraph_BP_RegionSelectModal
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RegionSelectModal_C::ExecuteUbergraph_BP_RegionSelectModal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RegionSelectModal.BP_RegionSelectModal_C.ExecuteUbergraph_BP_RegionSelectModal");
		
		UBP_RegionSelectModal_C_ExecuteUbergraph_BP_RegionSelectModal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnContinue__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RegionSelectModal_C::OnContinue__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnContinue__DelegateSignature");
		
		UBP_RegionSelectModal_C_OnContinue__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnNavigateBack__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RegionSelectModal_C::OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnNavigateBack__DelegateSignature");
		
		UBP_RegionSelectModal_C_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RegionSelectModal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RegionSelectModal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RegionSelectModal.BP_RegionSelectModal_C");
		return ptr;
	}

}


