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
	 * 		Name   -> Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.CommitKeyUpdate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_KeyInput_C::CommitKeyUpdate(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.CommitKeyUpdate");
		
		UBP_OptionsRow_KeyInput_C_CommitKeyUpdate_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.RebuildBindingIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OptionsRow_KeyInput_C::RebuildBindingIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.RebuildBindingIcon");
		
		UBP_OptionsRow_KeyInput_C_RebuildBindingIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.RevertKey
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OptionsRow_KeyInput_C::RevertKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.RevertKey");
		
		UBP_OptionsRow_KeyInput_C_RevertKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.ChangeKey
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        NewKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_KeyInput_C::ChangeKey(const struct FKey& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.ChangeKey");
		
		UBP_OptionsRow_KeyInput_C_ChangeKey_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.Get_RevertButton_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_OptionsRow_KeyInput_C::Get_RevertButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.Get_RevertButton_Visibility_1");
		
		UBP_OptionsRow_KeyInput_C_Get_RevertButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.Get_ClearButton_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_OptionsRow_KeyInput_C::Get_ClearButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.Get_ClearButton_Visibility_1");
		
		UBP_OptionsRow_KeyInput_C_Get_ClearButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.PopulateSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OptionsRow_KeyInput_C::PopulateSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.PopulateSettings");
		
		UBP_OptionsRow_KeyInput_C_PopulateSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_OptionsRow_KeyInput_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.Construct");
		
		UBP_OptionsRow_KeyInput_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.BndEvt__ButtonRebind_K2Node_ComponentBoundEvent_50_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_OptionsRow_KeyInput_C::BndEvt__ButtonRebind_K2Node_ComponentBoundEvent_50_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.BndEvt__ButtonRebind_K2Node_ComponentBoundEvent_50_OnClick__DelegateSignature");
		
		UBP_OptionsRow_KeyInput_C_BndEvt__ButtonRebind_K2Node_ComponentBoundEvent_50_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.OnKeyBound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        NewKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_KeyInput_C::OnKeyBound(const class FName& Action, const struct FKey& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.OnKeyBound");
		
		UBP_OptionsRow_KeyInput_C_OnKeyBound_Params params {};
		params.Action = Action;
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.BndEvt__ButtonClear_K2Node_ComponentBoundEvent_31_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_OptionsRow_KeyInput_C::BndEvt__ButtonClear_K2Node_ComponentBoundEvent_31_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.BndEvt__ButtonClear_K2Node_ComponentBoundEvent_31_OnClick__DelegateSignature");
		
		UBP_OptionsRow_KeyInput_C_BndEvt__ButtonClear_K2Node_ComponentBoundEvent_31_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.BndEvt__ButtonRevert_K2Node_ComponentBoundEvent_41_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_OptionsRow_KeyInput_C::BndEvt__ButtonRevert_K2Node_ComponentBoundEvent_41_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.BndEvt__ButtonRevert_K2Node_ComponentBoundEvent_41_OnClick__DelegateSignature");
		
		UBP_OptionsRow_KeyInput_C_BndEvt__ButtonRevert_K2Node_ComponentBoundEvent_41_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OptionsRow_KeyInput_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.PreConstruct");
		
		UBP_OptionsRow_KeyInput_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.ExecuteUbergraph_BP_OptionsRow_KeyInput
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_KeyInput_C::ExecuteUbergraph_BP_OptionsRow_KeyInput(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.ExecuteUbergraph_BP_OptionsRow_KeyInput");
		
		UBP_OptionsRow_KeyInput_C_ExecuteUbergraph_BP_OptionsRow_KeyInput_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.OnActionMappingUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKeyBindingOption                           BindingOption                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FInputChord                                 NewKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UBP_OptionsRow_KeyInput_C*                   KeyWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_KeyInput_C::OnActionMappingUpdated__DelegateSignature(const struct FKeyBindingOption& BindingOption, const struct FInputChord& NewKey, class UBP_OptionsRow_KeyInput_C* KeyWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.OnActionMappingUpdated__DelegateSignature");
		
		UBP_OptionsRow_KeyInput_C_OnActionMappingUpdated__DelegateSignature_Params params {};
		params.BindingOption = BindingOption;
		params.NewKey = NewKey;
		params.KeyWidget = KeyWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_OptionsRow_KeyInput_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OptionsRow_KeyInput_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C");
		return ptr;
	}

}


