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
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.shouldAlarmBeOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shouldAlarmBeOn                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URDAMonitor_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.shouldAlarmBeOn");
		
		URDAMonitor_C_shouldAlarmBeOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldAlarmBeOn != nullptr)
			*shouldAlarmBeOn = params.shouldAlarmBeOn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.GetContentSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   contentSize                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URDAMonitor_C::GetContentSize(struct FVector2D* contentSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.GetContentSize");
		
		URDAMonitor_C_GetContentSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (contentSize != nullptr)
			*contentSize = params.contentSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.SetPrisonerToMonitorOnChildren
	 * 		Flags  -> ()
	 */
	void URDAMonitor_C::SetPrisonerToMonitorOnChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.SetPrisonerToMonitorOnChildren");
		
		URDAMonitor_C_SetPrisonerToMonitorOnChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.Init
	 * 		Flags  -> ()
	 */
	void URDAMonitor_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.Init");
		
		URDAMonitor_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.GetTitleText
	 * 		Flags  -> ()
	 */
	class FText URDAMonitor_C::GetTitleText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.GetTitleText");
		
		URDAMonitor_C_GetTitleText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.GetDefaultTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        defaultTitle                                               (Parm, OutParm)
	 */
	void URDAMonitor_C::GetDefaultTitle(class FText* defaultTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.GetDefaultTitle");
		
		URDAMonitor_C_GetDefaultTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (defaultTitle != nullptr)
			*defaultTitle = params.defaultTitle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.SelectCustomColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URDAMonitor_C::SelectCustomColor(struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.SelectCustomColor");
		
		URDAMonitor_C_SelectCustomColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.OnMinimize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shouldMinimize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URDAMonitor_C::OnMinimize(bool shouldMinimize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.OnMinimize");
		
		URDAMonitor_C_OnMinimize_Params params {};
		params.shouldMinimize = shouldMinimize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.Construct
	 * 		Flags  -> ()
	 */
	void URDAMonitor_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.Construct");
		
		URDAMonitor_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URDAMonitor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.Tick");
		
		URDAMonitor_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.MinimizableWidgetSizeChanged
	 * 		Flags  -> ()
	 */
	void URDAMonitor_C::MinimizableWidgetSizeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.MinimizableWidgetSizeChanged");
		
		URDAMonitor_C_MinimizableWidgetSizeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.RDAMonitorSizeChanged
	 * 		Flags  -> ()
	 */
	void URDAMonitor_C::RDAMonitorSizeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.RDAMonitorSizeChanged");
		
		URDAMonitor_C_RDAMonitorSizeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.OnPrisonerSet
	 * 		Flags  -> ()
	 */
	void URDAMonitor_C::OnPrisonerSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.OnPrisonerSet");
		
		URDAMonitor_C_OnPrisonerSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.OnRDAMonitorContentSizeChanged
	 * 		Flags  -> ()
	 */
	void URDAMonitor_C::OnRDAMonitorContentSizeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.OnRDAMonitorContentSizeChanged");
		
		URDAMonitor_C_OnRDAMonitorContentSizeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.WindowContentSizeChanged
	 * 		Flags  -> ()
	 */
	void URDAMonitor_C::WindowContentSizeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.WindowContentSizeChanged");
		
		URDAMonitor_C_WindowContentSizeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.ExecuteUbergraph_RDAMonitor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URDAMonitor_C::ExecuteUbergraph_RDAMonitor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.ExecuteUbergraph_RDAMonitor");
		
		URDAMonitor_C_ExecuteUbergraph_RDAMonitor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RDAMonitor.RDAMonitor_C.RDASizeChangeEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   newSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URDAMonitor_C::RDASizeChangeEventDispatcher__DelegateSignature(const struct FVector2D& newSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.RDASizeChangeEventDispatcher__DelegateSignature");
		
		URDAMonitor_C_RDASizeChangeEventDispatcher__DelegateSignature_Params params {};
		params.newSize = newSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URDAMonitor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URDAMonitor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RDAMonitor.RDAMonitor_C");
		return ptr;
	}

}


