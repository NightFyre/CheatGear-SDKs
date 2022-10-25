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
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.GetSliderValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Color_Slider_C::GetSliderValue(float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.GetSliderValue");
		
		UBP_OptionsRow_Color_Slider_C_GetSliderValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.UpdateRepresentativeText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OptionsRow_Color_Slider_C::UpdateRepresentativeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.UpdateRepresentativeText");
		
		UBP_OptionsRow_Color_Slider_C_UpdateRepresentativeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnCanceled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OptionsRow_Color_Slider_C::OnCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnCanceled");
		
		UBP_OptionsRow_Color_Slider_C_OnCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.UpdateValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Color_Slider_C::UpdateValue(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.UpdateValue");
		
		UBP_OptionsRow_Color_Slider_C_UpdateValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.UpdateArrowColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OptionsRow_Color_Slider_C::UpdateArrowColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.UpdateArrowColor");
		
		UBP_OptionsRow_Color_Slider_C_UpdateArrowColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_OptionsRow_Color_Slider_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnFocusReceived");
		
		UBP_OptionsRow_Color_Slider_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.UpdateArrowVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OptionsRow_Color_Slider_C::UpdateArrowVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.UpdateArrowVisibility");
		
		UBP_OptionsRow_Color_Slider_C_UpdateArrowVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnSelected
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OptionsRow_Color_Slider_C::OnSelected(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnSelected");
		
		UBP_OptionsRow_Color_Slider_C_OnSelected_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnHovered
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hovered                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OptionsRow_Color_Slider_C::OnHovered(bool Hovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnHovered");
		
		UBP_OptionsRow_Color_Slider_C_OnHovered_Params params {};
		params.Hovered = Hovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Color_Slider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UBP_OptionsRow_Color_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Color_Slider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UBP_OptionsRow_Color_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_OptionsRow_Color_Slider_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnAddedToFocusPath");
		
		UBP_OptionsRow_Color_Slider_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_OptionsRow_Color_Slider_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnRemovedFromFocusPath");
		
		UBP_OptionsRow_Color_Slider_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_OptionsRow_Color_Slider_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnMouseEnter");
		
		UBP_OptionsRow_Color_Slider_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_OptionsRow_Color_Slider_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnMouseLeave");
		
		UBP_OptionsRow_Color_Slider_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_OptionsRow_Color_Slider_C::BndEvt__LeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UBP_OptionsRow_Color_Slider_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_OptionsRow_Color_Slider_C::BndEvt__RightButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UBP_OptionsRow_Color_Slider_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.ExecuteUbergraph_BP_OptionsRow_Color_Slider
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Color_Slider_C::ExecuteUbergraph_BP_OptionsRow_Color_Slider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.ExecuteUbergraph_BP_OptionsRow_Color_Slider");
		
		UBP_OptionsRow_Color_Slider_C_ExecuteUbergraph_BP_OptionsRow_Color_Slider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnValueCommited__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Color_Slider_C::OnValueCommited__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnValueCommited__DelegateSignature");
		
		UBP_OptionsRow_Color_Slider_C_OnValueCommited__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnValueChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Color_Slider_C::OnValueChanged__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnValueChanged__DelegateSignature");
		
		UBP_OptionsRow_Color_Slider_C_OnValueChanged__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_OptionsRow_Color_Slider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OptionsRow_Color_Slider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C");
		return ptr;
	}

}


