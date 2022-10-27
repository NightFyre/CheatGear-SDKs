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
	 * 		Name   -> Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.IsSelectingKey
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSelecting                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionsMenuItem_InputKeySelector_C::IsSelectingKey(bool* IsSelecting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.IsSelectingKey");
		
		UWBP_OptionsMenuItem_InputKeySelector_C_IsSelectingKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSelecting != nullptr)
			*IsSelecting = params.IsSelecting;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.ClearSelectedKey
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_OptionsMenuItem_InputKeySelector_C*     IKS                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        NewKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               bIsPlayerChangingKeyBindings                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionsMenuItem_InputKeySelector_C::ClearSelectedKey(class UWBP_OptionsMenuItem_InputKeySelector_C* IKS, const struct FKey& NewKey, bool bIsPlayerChangingKeyBindings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.ClearSelectedKey");
		
		UWBP_OptionsMenuItem_InputKeySelector_C_ClearSelectedKey_Params params {};
		params.IKS = IKS;
		params.NewKey = NewKey;
		params.bIsPlayerChangingKeyBindings = bIsPlayerChangingKeyBindings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.SetSelectedKey
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_InputKeySelector_C::SetSelectedKey(const struct FKey& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.SetSelectedKey");
		
		UWBP_OptionsMenuItem_InputKeySelector_C_SetSelectedKey_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.GetSelectedKey
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        SelectedKey                                                (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_InputKeySelector_C::GetSelectedKey(struct FKey* SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.GetSelectedKey");
		
		UWBP_OptionsMenuItem_InputKeySelector_C_GetSelectedKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedKey != nullptr)
			*SelectedKey = params.SelectedKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionsMenuItem_InputKeySelector_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.PreConstruct");
		
		UWBP_OptionsMenuItem_InputKeySelector_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.BndEvt__OptionIKS_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_InputKeySelector_C::BndEvt__OptionIKS_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.BndEvt__OptionIKS_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature");
		
		UWBP_OptionsMenuItem_InputKeySelector_C_BndEvt__OptionIKS_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.BndEvt__OptionIKS_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionsMenuItem_InputKeySelector_C::BndEvt__OptionIKS_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.BndEvt__OptionIKS_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionsMenuItem_InputKeySelector_C_BndEvt__OptionIKS_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.ExecuteUbergraph_WBP_OptionsMenuItem_InputKeySelector
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_InputKeySelector_C::ExecuteUbergraph_WBP_OptionsMenuItem_InputKeySelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.ExecuteUbergraph_WBP_OptionsMenuItem_InputKeySelector");
		
		UWBP_OptionsMenuItem_InputKeySelector_C_ExecuteUbergraph_WBP_OptionsMenuItem_InputKeySelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionsMenuItem_InputKeySelector_C::OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionsMenuItem_InputKeySelector_C_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.OnKeySelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_InputKeySelector_C::OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C.OnKeySelected__DelegateSignature");
		
		UWBP_OptionsMenuItem_InputKeySelector_C_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_OptionsMenuItem_InputKeySelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_OptionsMenuItem_InputKeySelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_OptionsMenuItem_InputKeySelector.WBP_OptionsMenuItem_InputKeySelector_C");
		return ptr;
	}

}


