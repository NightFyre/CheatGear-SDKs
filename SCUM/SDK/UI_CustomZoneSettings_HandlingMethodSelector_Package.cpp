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
	 * 		Name   -> Function UI_CustomZoneSettings_HandlingMethodSelector.UI_CustomZoneSettings_HandlingMethodSelector_C.GetToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_CustomZoneSettings_HandlingMethodSelector_C::GetToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomZoneSettings_HandlingMethodSelector.UI_CustomZoneSettings_HandlingMethodSelector_C.GetToolTipWidget");
		
		UUI_CustomZoneSettings_HandlingMethodSelector_C_GetToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomZoneSettings_HandlingMethodSelector.UI_CustomZoneSettings_HandlingMethodSelector_C.GetBlockToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_CustomZoneSettings_HandlingMethodSelector_C::GetBlockToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomZoneSettings_HandlingMethodSelector.UI_CustomZoneSettings_HandlingMethodSelector_C.GetBlockToolTipWidget");
		
		UUI_CustomZoneSettings_HandlingMethodSelector_C_GetBlockToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomZoneSettings_HandlingMethodSelector.UI_CustomZoneSettings_HandlingMethodSelector_C.GetAllowToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_CustomZoneSettings_HandlingMethodSelector_C::GetAllowToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomZoneSettings_HandlingMethodSelector.UI_CustomZoneSettings_HandlingMethodSelector_C.GetAllowToolTipWidget");
		
		UUI_CustomZoneSettings_HandlingMethodSelector_C_GetAllowToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomZoneSettings_HandlingMethodSelector.UI_CustomZoneSettings_HandlingMethodSelector_C.GetIgnoreToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_CustomZoneSettings_HandlingMethodSelector_C::GetIgnoreToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomZoneSettings_HandlingMethodSelector.UI_CustomZoneSettings_HandlingMethodSelector_C.GetIgnoreToolTipWidget");
		
		UUI_CustomZoneSettings_HandlingMethodSelector_C_GetIgnoreToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CustomZoneSettings_HandlingMethodSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomZoneSettings_HandlingMethodSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CustomZoneSettings_HandlingMethodSelector.UI_CustomZoneSettings_HandlingMethodSelector_C");
		return ptr;
	}

}


