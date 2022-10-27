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
	 * 		Name   -> Function UI_Mission.UI_Mission_C.GetCompleteObjectiveAnimation
	 * 		Flags  -> ()
	 */
	class UWidgetAnimation* UUI_Mission_C::GetCompleteObjectiveAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Mission.UI_Mission_C.GetCompleteObjectiveAnimation");
		
		UUI_Mission_C_GetCompleteObjectiveAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Mission.UI_Mission_C.GetStartObjectiveAnimation
	 * 		Flags  -> ()
	 */
	class UWidgetAnimation* UUI_Mission_C::GetStartObjectiveAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Mission.UI_Mission_C.GetStartObjectiveAnimation");
		
		UUI_Mission_C_GetStartObjectiveAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Mission_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Mission_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Mission.UI_Mission_C");
		return ptr;
	}

}


