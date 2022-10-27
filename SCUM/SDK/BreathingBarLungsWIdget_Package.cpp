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
	 * 		Name   -> Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.GetCriticalLungsAnimation
	 * 		Flags  -> ()
	 */
	class UWidgetAnimation* UBreathingBarLungsWidget_C::GetCriticalLungsAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.GetCriticalLungsAnimation");
		
		UBreathingBarLungsWidget_C_GetCriticalLungsAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UBreathingBarLungsWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.Construct");
		
		UBreathingBarLungsWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.ExecuteUbergraph_BreathingBarLungsWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBreathingBarLungsWidget_C::ExecuteUbergraph_BreathingBarLungsWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.ExecuteUbergraph_BreathingBarLungsWidget");
		
		UBreathingBarLungsWidget_C_ExecuteUbergraph_BreathingBarLungsWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBreathingBarLungsWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBreathingBarLungsWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BreathingBarLungsWIdget.BreathingBarLungsWidget_C");
		return ptr;
	}

}


