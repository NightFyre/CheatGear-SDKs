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
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValueInternal
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDirectSet                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionsMenuItem_Slider_C::SetValueInternal(float InValue, bool bDirectSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValueInternal");
		
		UWBP_OptionsMenuItem_Slider_C_SetValueInternal_Params params {};
		params.InValue = InValue;
		params.bDirectSet = bDirectSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.DoesMouseUseStep
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bOutMouseUsesStep                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionsMenuItem_Slider_C::DoesMouseUseStep(bool* bOutMouseUsesStep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.DoesMouseUseStep");
		
		UWBP_OptionsMenuItem_Slider_C_DoesMouseUseStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutMouseUsesStep != nullptr)
			*bOutMouseUsesStep = params.bOutMouseUsesStep;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetMouseUsesStep
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInMouseUsesStep                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionsMenuItem_Slider_C::SetMouseUsesStep(bool bInMouseUsesStep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetMouseUsesStep");
		
		UWBP_OptionsMenuItem_Slider_C_SetMouseUsesStep_Params params {};
		params.bInMouseUsesStep = bInMouseUsesStep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValueStepSize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewStepSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Slider_C::SetValueStepSize(float NewStepSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValueStepSize");
		
		UWBP_OptionsMenuItem_Slider_C_SetValueStepSize_Params params {};
		params.NewStepSize = NewStepSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValueMax
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewMax                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Slider_C::SetValueMax(float NewMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValueMax");
		
		UWBP_OptionsMenuItem_Slider_C_SetValueMax_Params params {};
		params.NewMax = NewMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValueMin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewMin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Slider_C::SetValueMin(float NewMin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValueMin");
		
		UWBP_OptionsMenuItem_Slider_C_SetValueMin_Params params {};
		params.NewMin = NewMin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.UpdateSliderText
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Slider_C::UpdateSliderText(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.UpdateSliderText");
		
		UWBP_OptionsMenuItem_Slider_C_UpdateSliderText_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.GetNormalizedValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              ValueNormalized                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Slider_C::GetNormalizedValue(float* ValueNormalized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.GetNormalizedValue");
		
		UWBP_OptionsMenuItem_Slider_C_GetNormalizedValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValueNormalized != nullptr)
			*ValueNormalized = params.ValueNormalized;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetNormalizedValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InNormValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Slider_C::SetNormalizedValue(float InNormValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetNormalizedValue");
		
		UWBP_OptionsMenuItem_Slider_C_SetNormalizedValue_Params params {};
		params.InNormValue = InNormValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetLocked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInLocked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionsMenuItem_Slider_C::SetLocked(bool bInLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetLocked");
		
		UWBP_OptionsMenuItem_Slider_C_SetLocked_Params params {};
		params.bInLocked = bInLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.IsLocked
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bOutLocked                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionsMenuItem_Slider_C::IsLocked(bool* bOutLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.IsLocked");
		
		UWBP_OptionsMenuItem_Slider_C_IsLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutLocked != nullptr)
			*bOutLocked = params.bOutLocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Slider_C::SetValue(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValue");
		
		UWBP_OptionsMenuItem_Slider_C_SetValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.GetValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Slider_C::GetValue(float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.GetValue");
		
		UWBP_OptionsMenuItem_Slider_C_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionsMenuItem_Slider_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.PreConstruct");
		
		UWBP_OptionsMenuItem_Slider_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.BndEvt__OptionSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Slider_C::BndEvt__OptionSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.BndEvt__OptionSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
		
		UWBP_OptionsMenuItem_Slider_C_BndEvt__OptionSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.ExecuteUbergraph_WBP_OptionsMenuItem_Slider
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Slider_C::ExecuteUbergraph_WBP_OptionsMenuItem_Slider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.ExecuteUbergraph_WBP_OptionsMenuItem_Slider");
		
		UWBP_OptionsMenuItem_Slider_C_ExecuteUbergraph_WBP_OptionsMenuItem_Slider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.ValueChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionsMenuItem_Slider_C::ValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.ValueChanged__DelegateSignature");
		
		UWBP_OptionsMenuItem_Slider_C_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_OptionsMenuItem_Slider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_OptionsMenuItem_Slider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C");
		return ptr;
	}

}


