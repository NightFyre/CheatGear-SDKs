/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.SetCheckedState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECheckBoxState                                     NewCheckedState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Checkbox_C::SetCheckedState(ECheckBoxState NewCheckedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.SetCheckedState");
		
		UWBP_OptionsMenuItem_Checkbox_C_SetCheckedState_Params params {};
		params.NewCheckedState = NewCheckedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.SetIsChecked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bChecked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionsMenuItem_Checkbox_C::SetIsChecked(bool bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.SetIsChecked");
		
		UWBP_OptionsMenuItem_Checkbox_C_SetIsChecked_Params params {};
		params.bChecked = bChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.IsChecked
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bChecked                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionsMenuItem_Checkbox_C::IsChecked(bool* bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.IsChecked");
		
		UWBP_OptionsMenuItem_Checkbox_C_IsChecked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bChecked != nullptr)
			*bChecked = params.bChecked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.GetCheckedState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ECheckBoxState                                     CheckedState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Checkbox_C::GetCheckedState(ECheckBoxState* CheckedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.GetCheckedState");
		
		UWBP_OptionsMenuItem_Checkbox_C_GetCheckedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CheckedState != nullptr)
			*CheckedState = params.CheckedState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionsMenuItem_Checkbox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.PreConstruct");
		
		UWBP_OptionsMenuItem_Checkbox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.BndEvt__OptionCBox_K2Node_ComponentBoundEvent_0_CheckStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		ECheckBoxState                                     CheckedState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Checkbox_C::BndEvt__OptionCBox_K2Node_ComponentBoundEvent_0_CheckStateChanged__DelegateSignature(ECheckBoxState CheckedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.BndEvt__OptionCBox_K2Node_ComponentBoundEvent_0_CheckStateChanged__DelegateSignature");
		
		UWBP_OptionsMenuItem_Checkbox_C_BndEvt__OptionCBox_K2Node_ComponentBoundEvent_0_CheckStateChanged__DelegateSignature_Params params {};
		params.CheckedState = CheckedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.BndEvt__OptionCBox_K2Node_ComponentBoundEvent_1_CheckStateChangedBool__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bChecked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionsMenuItem_Checkbox_C::BndEvt__OptionCBox_K2Node_ComponentBoundEvent_1_CheckStateChangedBool__DelegateSignature(bool bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.BndEvt__OptionCBox_K2Node_ComponentBoundEvent_1_CheckStateChangedBool__DelegateSignature");
		
		UWBP_OptionsMenuItem_Checkbox_C_BndEvt__OptionCBox_K2Node_ComponentBoundEvent_1_CheckStateChangedBool__DelegateSignature_Params params {};
		params.bChecked = bChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.ExecuteUbergraph_WBP_OptionsMenuItem_Checkbox
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Checkbox_C::ExecuteUbergraph_WBP_OptionsMenuItem_Checkbox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.ExecuteUbergraph_WBP_OptionsMenuItem_Checkbox");
		
		UWBP_OptionsMenuItem_Checkbox_C_ExecuteUbergraph_WBP_OptionsMenuItem_Checkbox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.CheckStateChangedBool__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bChecked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionsMenuItem_Checkbox_C::CheckStateChangedBool__DelegateSignature(bool bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.CheckStateChangedBool__DelegateSignature");
		
		UWBP_OptionsMenuItem_Checkbox_C_CheckStateChangedBool__DelegateSignature_Params params {};
		params.bChecked = bChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.CheckStateChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECheckBoxState                                     CheckedState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Checkbox_C::CheckStateChanged__DelegateSignature(ECheckBoxState CheckedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C.CheckStateChanged__DelegateSignature");
		
		UWBP_OptionsMenuItem_Checkbox_C_CheckStateChanged__DelegateSignature_Params params {};
		params.CheckedState = CheckedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_OptionsMenuItem_Checkbox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_OptionsMenuItem_Checkbox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C");
		return ptr;
	}

}


