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
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_OptionsRow_Slider_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnKeyDown");
		
		UBP_OptionsRow_Slider_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.UpdateScrollSpeed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OptionsRow_Slider_C::UpdateScrollSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.UpdateScrollSpeed");
		
		UBP_OptionsRow_Slider_C_UpdateScrollSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_OptionsRow_Slider_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnKeyUp");
		
		UBP_OptionsRow_Slider_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_OptionsRow_Slider_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnCustomNavigation");
		
		UBP_OptionsRow_Slider_C_OnCustomNavigation_Params params {};
		params.Widget = Widget;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_OptionsRow_Slider_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnFocusReceived");
		
		UBP_OptionsRow_Slider_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.GetValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Slider_C::GetValue(float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.GetValue");
		
		UBP_OptionsRow_Slider_C_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.GetRoundedValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Slider_C::GetRoundedValue(float Value, float* OutValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.GetRoundedValue");
		
		UBP_OptionsRow_Slider_C_GetRoundedValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValue != nullptr)
			*OutValue = params.OutValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.UpdateValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Updated_Value                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Slider_C::UpdateValue(float Value, float* Updated_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.UpdateValue");
		
		UBP_OptionsRow_Slider_C_UpdateValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Updated_Value != nullptr)
			*Updated_Value = params.Updated_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.GetForegroundColor_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_OptionsRow_Slider_C::GetForegroundColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.GetForegroundColor_1");
		
		UBP_OptionsRow_Slider_C_GetForegroundColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.SetInitialValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amt                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Slider_C::SetInitialValue(float Amt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.SetInitialValue");
		
		UBP_OptionsRow_Slider_C_SetInitialValue_Params params {};
		params.Amt = Amt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.GetSlider
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USpinBox*                                    Box                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Slider_C::GetSlider(class USpinBox** Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.GetSlider");
		
		UBP_OptionsRow_Slider_C_GetSlider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Box != nullptr)
			*Box = params.Box;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_OptionsRow_Slider_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.Construct");
		
		UBP_OptionsRow_Slider_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Slider_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.Tick");
		
		UBP_OptionsRow_Slider_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.BndEvt__SpinBox_481_K2Node_ComponentBoundEvent_243_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Slider_C::BndEvt__SpinBox_481_K2Node_ComponentBoundEvent_243_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.BndEvt__SpinBox_481_K2Node_ComponentBoundEvent_243_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UBP_OptionsRow_Slider_C_BndEvt__SpinBox_481_K2Node_ComponentBoundEvent_243_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Slider_C::BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UBP_OptionsRow_Slider_C_BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OptionsRow_Slider_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.PreConstruct");
		
		UBP_OptionsRow_Slider_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_OptionsRow_Slider_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnMouseEnter");
		
		UBP_OptionsRow_Slider_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_OptionsRow_Slider_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnMouseLeave");
		
		UBP_OptionsRow_Slider_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxBeginSliderMovement__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_OptionsRow_Slider_C::BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxBeginSliderMovement__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxBeginSliderMovement__DelegateSignature");
		
		UBP_OptionsRow_Slider_C_BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxBeginSliderMovement__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Slider_C::BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UBP_OptionsRow_Slider_C_BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_OptionsRow_Slider_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnAddedToFocusPath");
		
		UBP_OptionsRow_Slider_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_OptionsRow_Slider_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnRemovedFromFocusPath");
		
		UBP_OptionsRow_Slider_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.ExecuteUbergraph_BP_OptionsRow_Slider
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Slider_C::ExecuteUbergraph_BP_OptionsRow_Slider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.ExecuteUbergraph_BP_OptionsRow_Slider");
		
		UBP_OptionsRow_Slider_C_ExecuteUbergraph_BP_OptionsRow_Slider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnValueChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Slider_C::OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnValueChanged__DelegateSignature");
		
		UBP_OptionsRow_Slider_C_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnValueCommitted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Slider_C::OnValueCommitted__DelegateSignature(float NewValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnValueCommitted__DelegateSignature");
		
		UBP_OptionsRow_Slider_C_OnValueCommitted__DelegateSignature_Params params {};
		params.NewValue = NewValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_OptionsRow_Slider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OptionsRow_Slider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_OptionsRow_Slider.BP_OptionsRow_Slider_C");
		return ptr;
	}

}


