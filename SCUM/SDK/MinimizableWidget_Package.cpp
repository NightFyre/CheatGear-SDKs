/**
 * Name: SCUM
 * Version: 0.7.162
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.OnMouseDoubleClick_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMinimizableWidget_C::OnMouseDoubleClick_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.OnMouseDoubleClick_1");
		
		UMinimizableWidget_C_OnMouseDoubleClick_1_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.SetMinimizableWidgetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   newMinWidgetSize                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimizableWidget_C::SetMinimizableWidgetSize(const struct FVector2D& newMinWidgetSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.SetMinimizableWidgetSize");
		
		UMinimizableWidget_C_SetMinimizableWidgetSize_Params params {};
		params.newMinWidgetSize = newMinWidgetSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.GetMinimizableWidgetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   widgetSize                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimizableWidget_C::GetMinimizableWidgetSize(struct FVector2D* widgetSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.GetMinimizableWidgetSize");
		
		UMinimizableWidget_C_GetMinimizableWidgetSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (widgetSize != nullptr)
			*widgetSize = params.widgetSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.SetAlarmColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shouldSetAlarmColorOn                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMinimizableWidget_C::SetAlarmColor(bool shouldSetAlarmColorOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.SetAlarmColor");
		
		UMinimizableWidget_C_SetAlarmColor_Params params {};
		params.shouldSetAlarmColorOn = shouldSetAlarmColorOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.SetInitialIconsVisibility
	 * 		Flags  -> ()
	 */
	void UMinimizableWidget_C::SetInitialIconsVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.SetInitialIconsVisibility");
		
		UMinimizableWidget_C_SetInitialIconsVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.Minimize
	 * 		Flags  -> ()
	 */
	void UMinimizableWidget_C::Minimize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Minimize");
		
		UMinimizableWidget_C_Minimize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.Maximize
	 * 		Flags  -> ()
	 */
	void UMinimizableWidget_C::Maximize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Maximize");
		
		UMinimizableWidget_C_Maximize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.OnMaximizeImageMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMinimizableWidget_C::OnMaximizeImageMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.OnMaximizeImageMouseButtonDown");
		
		UMinimizableWidget_C_OnMaximizeImageMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.OnMinimizeImageMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMinimizableWidget_C::OnMinimizeImageMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.OnMinimizeImageMouseButtonDown");
		
		UMinimizableWidget_C_OnMinimizeImageMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOff
	 * 		Flags  -> ()
	 */
	void UMinimizableWidget_C::AlarmSwitchOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOff");
		
		UMinimizableWidget_C_AlarmSwitchOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOn
	 * 		Flags  -> ()
	 */
	void UMinimizableWidget_C::AlarmSwitchOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOn");
		
		UMinimizableWidget_C_AlarmSwitchOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.Event Widget Size Changed
	 * 		Flags  -> ()
	 */
	void UMinimizableWidget_C::Event_Widget_Size_Changed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Event Widget Size Changed");
		
		UMinimizableWidget_C_Event_Widget_Size_Changed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimizableWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Tick");
		
		UMinimizableWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.Event Widget Maximized
	 * 		Flags  -> ()
	 */
	void UMinimizableWidget_C::Event_Widget_Maximized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Event Widget Maximized");
		
		UMinimizableWidget_C_Event_Widget_Maximized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UMinimizableWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Construct");
		
		UMinimizableWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.Event Widget Minimized
	 * 		Flags  -> ()
	 */
	void UMinimizableWidget_C::Event_Widget_Minimized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Event Widget Minimized");
		
		UMinimizableWidget_C_Event_Widget_Minimized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.OnMinimize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shouldMinimize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMinimizableWidget_C::OnMinimize(bool shouldMinimize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.OnMinimize");
		
		UMinimizableWidget_C_OnMinimize_Params params {};
		params.shouldMinimize = shouldMinimize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.WindowContentSizeChanged
	 * 		Flags  -> ()
	 */
	void UMinimizableWidget_C::WindowContentSizeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.WindowContentSizeChanged");
		
		UMinimizableWidget_C_WindowContentSizeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.AlarmOnWindowContent
	 * 		Flags  -> ()
	 */
	void UMinimizableWidget_C::AlarmOnWindowContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.AlarmOnWindowContent");
		
		UMinimizableWidget_C_AlarmOnWindowContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.AlarmOffWindowContent
	 * 		Flags  -> ()
	 */
	void UMinimizableWidget_C::AlarmOffWindowContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.AlarmOffWindowContent");
		
		UMinimizableWidget_C_AlarmOffWindowContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.ExecuteUbergraph_MinimizableWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimizableWidget_C::ExecuteUbergraph_MinimizableWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.ExecuteUbergraph_MinimizableWidget");
		
		UMinimizableWidget_C_ExecuteUbergraph_MinimizableWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMinimizableWidget_C::NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature");
		
		UMinimizableWidget_C_NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMinimizableWidget_C::NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature");
		
		UMinimizableWidget_C_NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMinimizableWidget_C::NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature");
		
		UMinimizableWidget_C_NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MinimizableWidget.MinimizableWidget_C.WidgetSizeChangedEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMinimizableWidget_C::WidgetSizeChangedEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.WidgetSizeChangedEventDispatcher__DelegateSignature");
		
		UMinimizableWidget_C_WidgetSizeChangedEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMinimizableWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMinimizableWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MinimizableWidget.MinimizableWidget_C");
		return ptr;
	}

}


