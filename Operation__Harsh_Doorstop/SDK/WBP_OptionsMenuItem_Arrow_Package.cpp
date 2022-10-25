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
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.FindOptionIndex
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        OptionDisplayName                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::FindOptionIndex(const class FText& OptionDisplayName, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.FindOptionIndex");
		
		UWBP_OptionsMenuItem_Arrow_C_FindOptionIndex_Params params {};
		params.OptionDisplayName = OptionDisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.SetSelectedOption
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        OptionDisplayName                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::SetSelectedOption(const class FText& OptionDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.SetSelectedOption");
		
		UWBP_OptionsMenuItem_Arrow_C_SetSelectedOption_Params params {};
		params.OptionDisplayName = OptionDisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.SetSelectedOptionByValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      OptionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::SetSelectedOptionByValue(const class FString& OptionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.SetSelectedOptionByValue");
		
		UWBP_OptionsMenuItem_Arrow_C_SetSelectedOptionByValue_Params params {};
		params.OptionValue = OptionValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.PopulateOptionsByPreset
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EArrowOptionsPreset                                Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::PopulateOptionsByPreset(EArrowOptionsPreset Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.PopulateOptionsByPreset");
		
		UWBP_OptionsMenuItem_Arrow_C_PopulateOptionsByPreset_Params params {};
		params.Preset = Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.FindOptionValueIndex
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      OptionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::FindOptionValueIndex(const class FString& OptionValue, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.FindOptionValueIndex");
		
		UWBP_OptionsMenuItem_Arrow_C_FindOptionValueIndex_Params params {};
		params.OptionValue = OptionValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.SetSelectedOptionByIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::SetSelectedOptionByIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.SetSelectedOptionByIndex");
		
		UWBP_OptionsMenuItem_Arrow_C_SetSelectedOptionByIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.ClearSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::ClearSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.ClearSelection");
		
		UWBP_OptionsMenuItem_Arrow_C_ClearSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.INTERNAL_ClearSelection
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESelectInfo                                        DeselectionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::INTERNAL_ClearSelection(ESelectInfo DeselectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.INTERNAL_ClearSelection");
		
		UWBP_OptionsMenuItem_Arrow_C_INTERNAL_ClearSelection_Params params {};
		params.DeselectionType = DeselectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.RemoveOptionAtIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IndexToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bRemovalSuccess                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::RemoveOptionAtIndex(int32_t IndexToRemove, bool* bRemovalSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.RemoveOptionAtIndex");
		
		UWBP_OptionsMenuItem_Arrow_C_RemoveOptionAtIndex_Params params {};
		params.IndexToRemove = IndexToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRemovalSuccess != nullptr)
			*bRemovalSuccess = params.bRemovalSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.GetOptionCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            OptionCount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::GetOptionCount(int32_t* OptionCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.GetOptionCount");
		
		UWBP_OptionsMenuItem_Arrow_C_GetOptionCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OptionCount != nullptr)
			*OptionCount = params.OptionCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.AddOption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFOptionItemSelection                       NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::AddOption(struct FFOptionItemSelection* NewOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.AddOption");
		
		UWBP_OptionsMenuItem_Arrow_C_AddOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewOption != nullptr)
			*NewOption = params.NewOption;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.GetOptionValueAtIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OptionValue                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::GetOptionValueAtIndex(int32_t Index, class FString* OptionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.GetOptionValueAtIndex");
		
		UWBP_OptionsMenuItem_Arrow_C_GetOptionValueAtIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OptionValue != nullptr)
			*OptionValue = params.OptionValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.GetSelectedOptionValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      OptionValue                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::GetSelectedOptionValue(class FString* OptionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.GetSelectedOptionValue");
		
		UWBP_OptionsMenuItem_Arrow_C_GetSelectedOptionValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OptionValue != nullptr)
			*OptionValue = params.OptionValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.INTERNAL_SetSelectedOptionByIndex
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::INTERNAL_SetSelectedOptionByIndex(int32_t Index, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.INTERNAL_SetSelectedOptionByIndex");
		
		UWBP_OptionsMenuItem_Arrow_C_INTERNAL_SetSelectedOptionByIndex_Params params {};
		params.Index = Index;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.ClearOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::ClearOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.ClearOptions");
		
		UWBP_OptionsMenuItem_Arrow_C_ClearOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.BndEvt__PrevOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::BndEvt__PrevOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.BndEvt__PrevOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_OptionsMenuItem_Arrow_C_BndEvt__PrevOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.BndEvt__NextOptionBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::BndEvt__NextOptionBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.BndEvt__NextOptionBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_OptionsMenuItem_Arrow_C_BndEvt__NextOptionBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.PreConstruct");
		
		UWBP_OptionsMenuItem_Arrow_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.Construct");
		
		UWBP_OptionsMenuItem_Arrow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.OnItemSelectionChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItemValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::OnItemSelectionChanged(const class FString& SelectedItemValue, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.OnItemSelectionChanged");
		
		UWBP_OptionsMenuItem_Arrow_C_OnItemSelectionChanged_Params params {};
		params.SelectedItemValue = SelectedItemValue;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.ExecuteUbergraph_WBP_OptionsMenuItem_Arrow
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::ExecuteUbergraph_WBP_OptionsMenuItem_Arrow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.ExecuteUbergraph_WBP_OptionsMenuItem_Arrow");
		
		UWBP_OptionsMenuItem_Arrow_C_ExecuteUbergraph_WBP_OptionsMenuItem_Arrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.OnSelectionChangedByUser__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItemValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::OnSelectionChangedByUser__DelegateSignature(const class FString& SelectedItemValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.OnSelectionChangedByUser__DelegateSignature");
		
		UWBP_OptionsMenuItem_Arrow_C_OnSelectionChangedByUser__DelegateSignature_Params params {};
		params.SelectedItemValue = SelectedItemValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItemValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Arrow_C::OnSelectionChanged__DelegateSignature(const class FString& SelectedItemValue, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C.OnSelectionChanged__DelegateSignature");
		
		UWBP_OptionsMenuItem_Arrow_C_OnSelectionChanged__DelegateSignature_Params params {};
		params.SelectedItemValue = SelectedItemValue;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_OptionsMenuItem_Arrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_OptionsMenuItem_Arrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_OptionsMenuItem_Arrow.WBP_OptionsMenuItem_Arrow_C");
		return ptr;
	}

}


