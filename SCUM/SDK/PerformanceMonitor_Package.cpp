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
	 * 		Name   -> Function PerformanceMonitor.PerformanceMonitor_C.shouldAlarmBeOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shouldAlarmBeOn                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPerformanceMonitor_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.shouldAlarmBeOn");
		
		UPerformanceMonitor_C_shouldAlarmBeOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldAlarmBeOn != nullptr)
			*shouldAlarmBeOn = params.shouldAlarmBeOn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerformanceMonitor.PerformanceMonitor_C.GetContentSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   contentSize                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPerformanceMonitor_C::GetContentSize(struct FVector2D* contentSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.GetContentSize");
		
		UPerformanceMonitor_C_GetContentSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (contentSize != nullptr)
			*contentSize = params.contentSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerformanceMonitor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerformanceMonitor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PerformanceMonitor.PerformanceMonitor_C");
		return ptr;
	}

}


