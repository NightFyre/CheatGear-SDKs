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
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.CreateReplayEventWidgets
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FBlueprintReplayEvent>               Events                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_ReplayControls_C::CreateReplayEventWidgets(TArray<struct FBlueprintReplayEvent>* Events)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.CreateReplayEventWidgets");
		
		UBP_ReplayControls_C_CreateReplayEventWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Events != nullptr)
			*Events = params.Events;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.UpdateTimeText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ReplayControls_C::UpdateTimeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.UpdateTimeText");
		
		UBP_ReplayControls_C_UpdateTimeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.UpdateTimeDilationText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ReplayControls_C::UpdateTimeDilationText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.UpdateTimeDilationText");
		
		UBP_ReplayControls_C_UpdateTimeDilationText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_ReplayControls_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.OnFocusReceived");
		
		UBP_ReplayControls_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.OnMouseButtonDoubleClick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   InMyGeometry                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               InMouseEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBP_ReplayControls_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.OnMouseButtonDoubleClick");
		
		UBP_ReplayControls_C_OnMouseButtonDoubleClick_Params params {};
		params.InMyGeometry = InMyGeometry;
		params.InMouseEvent = InMouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.OnMouseButtonUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBP_ReplayControls_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.OnMouseButtonUp");
		
		UBP_ReplayControls_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.ScrubToTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ReplayControls_C::ScrubToTime(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.ScrubToTime");
		
		UBP_ReplayControls_C_ScrubToTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.GetTimeDilationText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_ReplayControls_C::GetTimeDilationText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.GetTimeDilationText");
		
		UBP_ReplayControls_C_GetTimeDilationText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.UpdateSliderBackground
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ReplayControls_C::UpdateSliderBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.UpdateSliderBackground");
		
		UBP_ReplayControls_C_UpdateSliderBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.IsInteractable
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool UBP_ReplayControls_C::IsInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.IsInteractable");
		
		UBP_ReplayControls_C_IsInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBP_ReplayControls_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.OnMouseButtonDown");
		
		UBP_ReplayControls_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.GetSliderProgress
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UBP_ReplayControls_C::GetSliderProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.GetSliderProgress");
		
		UBP_ReplayControls_C_GetSliderProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.GetTimerText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_ReplayControls_C::GetTimerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.GetTimerText");
		
		UBP_ReplayControls_C_GetTimerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.OnEventsEnumerated_A1896B8F41770B019E95A6B00CA704BE
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FBlueprintReplayEvent>               EventsList                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_ReplayControls_C::OnEventsEnumerated_A1896B8F41770B019E95A6B00CA704BE(TArray<struct FBlueprintReplayEvent> EventsList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.OnEventsEnumerated_A1896B8F41770B019E95A6B00CA704BE");
		
		UBP_ReplayControls_C_OnEventsEnumerated_A1896B8F41770B019E95A6B00CA704BE_Params params {};
		params.EventsList = EventsList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ReplayControls_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.Construct");
		
		UBP_ReplayControls_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ReplayControls_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.Tick");
		
		UBP_ReplayControls_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__SliderProgress_K2Node_ComponentBoundEvent_30_OnMouseCaptureBeginEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ReplayControls_C::BndEvt__SliderProgress_K2Node_ComponentBoundEvent_30_OnMouseCaptureBeginEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__SliderProgress_K2Node_ComponentBoundEvent_30_OnMouseCaptureBeginEvent__DelegateSignature");
		
		UBP_ReplayControls_C_BndEvt__SliderProgress_K2Node_ComponentBoundEvent_30_OnMouseCaptureBeginEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__SliderProgress_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ReplayControls_C::BndEvt__SliderProgress_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__SliderProgress_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature");
		
		UBP_ReplayControls_C_BndEvt__SliderProgress_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.OnScrubToTimeComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ReplayControls_C::OnScrubToTimeComplete(bool bSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.OnScrubToTimeComplete");
		
		UBP_ReplayControls_C_OnScrubToTimeComplete_Params params {};
		params.bSuccessful = bSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__Button_424_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ReplayControls_C::BndEvt__Button_424_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__Button_424_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ReplayControls_C_BndEvt__Button_424_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__BtnHidecontrols_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ReplayControls_C::BndEvt__BtnHidecontrols_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__BtnHidecontrols_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ReplayControls_C_BndEvt__BtnHidecontrols_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__SliderProgress_K2Node_ComponentBoundEvent_229_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ReplayControls_C::BndEvt__SliderProgress_K2Node_ComponentBoundEvent_229_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__SliderProgress_K2Node_ComponentBoundEvent_229_OnFloatValueChangedEvent__DelegateSignature");
		
		UBP_ReplayControls_C_BndEvt__SliderProgress_K2Node_ComponentBoundEvent_229_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__BP_ImageButton_K2Node_ComponentBoundEvent_374_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ReplayControls_C::BndEvt__BP_ImageButton_K2Node_ComponentBoundEvent_374_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__BP_ImageButton_K2Node_ComponentBoundEvent_374_OnClicked__DelegateSignature");
		
		UBP_ReplayControls_C_BndEvt__BP_ImageButton_K2Node_ComponentBoundEvent_374_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.OnScrubbingStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsScrubbing                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ReplayControls_C::OnScrubbingStateChanged(bool bIsScrubbing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.OnScrubbingStateChanged");
		
		UBP_ReplayControls_C_OnScrubbingStateChanged_Params params {};
		params.bIsScrubbing = bIsScrubbing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayControls.BP_ReplayControls_C.ExecuteUbergraph_BP_ReplayControls
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ReplayControls_C::ExecuteUbergraph_BP_ReplayControls(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayControls.BP_ReplayControls_C.ExecuteUbergraph_BP_ReplayControls");
		
		UBP_ReplayControls_C_ExecuteUbergraph_BP_ReplayControls_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ReplayControls_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ReplayControls_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ReplayControls.BP_ReplayControls_C");
		return ptr;
	}

}


