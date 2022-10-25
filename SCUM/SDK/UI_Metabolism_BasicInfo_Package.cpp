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
	 * 		Name   -> Function UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C.GetBloodVolumeToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_BasicInfo_C::GetBloodVolumeToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C.GetBloodVolumeToolTip");
		
		UUI_Metabolism_BasicInfo_C_GetBloodVolumeToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C.GetBloodTypeToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_BasicInfo_C::GetBloodTypeToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C.GetBloodTypeToolTip");
		
		UUI_Metabolism_BasicInfo_C_GetBloodTypeToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C.GetStatTeetToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_BasicInfo_C::GetStatTeetToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C.GetStatTeetToolTip");
		
		UUI_Metabolism_BasicInfo_C_GetStatTeetToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C.GetStatTemperatureToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_BasicInfo_C::GetStatTemperatureToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C.GetStatTemperatureToolTip");
		
		UUI_Metabolism_BasicInfo_C_GetStatTemperatureToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C.GetStatWeightToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_BasicInfo_C::GetStatWeightToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C.GetStatWeightToolTip");
		
		UUI_Metabolism_BasicInfo_C_GetStatWeightToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C.GetStatLifetimeToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_BasicInfo_C::GetStatLifetimeToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C.GetStatLifetimeToolTip");
		
		UUI_Metabolism_BasicInfo_C_GetStatLifetimeToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C.GetStatAgeToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_BasicInfo_C::GetStatAgeToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C.GetStatAgeToolTip");
		
		UUI_Metabolism_BasicInfo_C_GetStatAgeToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C.GetStatHealthToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_BasicInfo_C::GetStatHealthToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C.GetStatHealthToolTip");
		
		UUI_Metabolism_BasicInfo_C_GetStatHealthToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Metabolism_BasicInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Metabolism_BasicInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C");
		return ptr;
	}

}


