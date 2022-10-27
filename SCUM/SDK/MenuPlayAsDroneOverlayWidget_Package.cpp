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
	 * 		Name   -> Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ToggleVisibility
	 * 		Flags  -> ()
	 */
	void UMenuPlayAsDroneOverlayWidget_C::ToggleVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ToggleVisibility");
		
		UMenuPlayAsDroneOverlayWidget_C_ToggleVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UMenuPlayAsDroneOverlayWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.Construct");
		
		UMenuPlayAsDroneOverlayWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ExecuteUbergraph_MenuPlayAsDroneOverlayWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenuPlayAsDroneOverlayWidget_C::ExecuteUbergraph_MenuPlayAsDroneOverlayWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ExecuteUbergraph_MenuPlayAsDroneOverlayWidget");
		
		UMenuPlayAsDroneOverlayWidget_C_ExecuteUbergraph_MenuPlayAsDroneOverlayWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenuPlayAsDroneOverlayWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuPlayAsDroneOverlayWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C");
		return ptr;
	}

}


