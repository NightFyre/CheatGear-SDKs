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
	 * 		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetSelectedKey
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_InputKeySelector_C::SetSelectedKey(const struct FKey& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetSelectedKey");
		
		UWBP_InputKeySelector_C_SetSelectedKey_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.GetSelectedKey
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        SelectedKey                                                (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_InputKeySelector_C::GetSelectedKey(struct FKey* SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.GetSelectedKey");
		
		UWBP_InputKeySelector_C_GetSelectedKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedKey != nullptr)
			*SelectedKey = params.SelectedKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__IKS_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_InputKeySelector_C::BndEvt__IKS_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__IKS_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_InputKeySelector_C_BndEvt__IKS_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__IKS_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_InputKeySelector_C::BndEvt__IKS_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__IKS_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature");
		
		UWBP_InputKeySelector_C_BndEvt__IKS_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.ExecuteUbergraph_WBP_InputKeySelector
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InputKeySelector_C::ExecuteUbergraph_WBP_InputKeySelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.ExecuteUbergraph_WBP_InputKeySelector");
		
		UWBP_InputKeySelector_C_ExecuteUbergraph_WBP_InputKeySelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_InputKeySelector_C::OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_InputKeySelector_C_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeySelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_InputKeySelector_C::OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeySelected__DelegateSignature");
		
		UWBP_InputKeySelector_C_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InputKeySelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InputKeySelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InputKeySelector.WBP_InputKeySelector_C");
		return ptr;
	}

}


