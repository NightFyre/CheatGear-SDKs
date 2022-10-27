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
	 * 		Name   -> Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.UpdateMagicValueState
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_ModifierSetting_Numeric_C::UpdateMagicValueState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.UpdateMagicValueState");
		
		UWBP_ModifierSetting_Numeric_C_UpdateMagicValueState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ModifierSetting_Numeric_C::GetValue(float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetValue");
		
		UWBP_ModifierSetting_Numeric_C_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ModifierSetting_Numeric_C::SetValue(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetValue");
		
		UWBP_ModifierSetting_Numeric_C_SetValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetMagicValueText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        MagicValueText                                             (Parm, OutParm)
	 */
	void UWBP_ModifierSetting_Numeric_C::GetMagicValueText(class FText* MagicValueText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetMagicValueText");
		
		UWBP_ModifierSetting_Numeric_C_GetMagicValueText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MagicValueText != nullptr)
			*MagicValueText = params.MagicValueText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetMagicValueText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InMagicValueText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ModifierSetting_Numeric_C::SetMagicValueText(const class FText& InMagicValueText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetMagicValueText");
		
		UWBP_ModifierSetting_Numeric_C_SetMagicValueText_Params params {};
		params.InMagicValueText = InMagicValueText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetSettingText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        SettingText                                                (Parm, OutParm)
	 */
	void UWBP_ModifierSetting_Numeric_C::GetSettingText(class FText* SettingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetSettingText");
		
		UWBP_ModifierSetting_Numeric_C_GetSettingText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SettingText != nullptr)
			*SettingText = params.SettingText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetSettingText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InSettingText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ModifierSetting_Numeric_C::SetSettingText(const class FText& InSettingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetSettingText");
		
		UWBP_ModifierSetting_Numeric_C_SetSettingText_Params params {};
		params.InSettingText = InSettingText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ModifierSetting_Numeric_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.PreConstruct");
		
		UWBP_ModifierSetting_Numeric_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ModifierSetting_Numeric_C::BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UWBP_ModifierSetting_Numeric_C_BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ModifierSetting_Numeric_C::BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UWBP_ModifierSetting_Numeric_C_BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.ExecuteUbergraph_WBP_ModifierSetting_Numeric
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ModifierSetting_Numeric_C::ExecuteUbergraph_WBP_ModifierSetting_Numeric(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.ExecuteUbergraph_WBP_ModifierSetting_Numeric");
		
		UWBP_ModifierSetting_Numeric_C_ExecuteUbergraph_WBP_ModifierSetting_Numeric_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.OnValueCommitted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ModifierSetting_Numeric_C::OnValueCommitted__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.OnValueCommitted__DelegateSignature");
		
		UWBP_ModifierSetting_Numeric_C_OnValueCommitted__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.OnValueChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ModifierSetting_Numeric_C::OnValueChanged__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.OnValueChanged__DelegateSignature");
		
		UWBP_ModifierSetting_Numeric_C_OnValueChanged__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ModifierSetting_Numeric_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ModifierSetting_Numeric_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C");
		return ptr;
	}

}


