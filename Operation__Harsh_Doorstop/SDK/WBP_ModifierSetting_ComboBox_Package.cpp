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
	 * 		Name   -> Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.GetSettingText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        SettingText                                                (Parm, OutParm)
	 */
	void UWBP_ModifierSetting_ComboBox_C::GetSettingText(class FText* SettingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.GetSettingText");
		
		UWBP_ModifierSetting_ComboBox_C_GetSettingText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SettingText != nullptr)
			*SettingText = params.SettingText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.SetSettingText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InSettingText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ModifierSetting_ComboBox_C::SetSettingText(const class FText& InSettingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.SetSettingText");
		
		UWBP_ModifierSetting_ComboBox_C_SetSettingText_Params params {};
		params.InSettingText = InSettingText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ModifierSetting_ComboBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.PreConstruct");
		
		UWBP_ModifierSetting_ComboBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ModifierSetting_ComboBox_C::BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_ModifierSetting_ComboBox_C_BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_ModifierSetting_ComboBox_C::BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature");
		
		UWBP_ModifierSetting_ComboBox_C_BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_ModifierSetting_ComboBox_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.OnInitialized");
		
		UWBP_ModifierSetting_ComboBox_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.ExecuteUbergraph_WBP_ModifierSetting_ComboBox
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ModifierSetting_ComboBox_C::ExecuteUbergraph_WBP_ModifierSetting_ComboBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.ExecuteUbergraph_WBP_ModifierSetting_ComboBox");
		
		UWBP_ModifierSetting_ComboBox_C_ExecuteUbergraph_WBP_ModifierSetting_ComboBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.OnOpening__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_ModifierSetting_ComboBox_C::OnOpening__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.OnOpening__DelegateSignature");
		
		UWBP_ModifierSetting_ComboBox_C_OnOpening__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ModifierSetting_ComboBox_C::OnSelectionChanged__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.OnSelectionChanged__DelegateSignature");
		
		UWBP_ModifierSetting_ComboBox_C_OnSelectionChanged__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ModifierSetting_ComboBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ModifierSetting_ComboBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C");
		return ptr;
	}

}


