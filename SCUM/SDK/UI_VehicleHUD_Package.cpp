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
	 * 		Name   -> Function UI_VehicleHUD.UI_VehicleHUD_C.GetSpeedIndicatorVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_VehicleHUD_C::GetSpeedIndicatorVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.GetSpeedIndicatorVisibility");
		
		UUI_VehicleHUD_C_GetSpeedIndicatorVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VehicleHUD.UI_VehicleHUD_C.GetBatteryAmountIndicatorVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_VehicleHUD_C::GetBatteryAmountIndicatorVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.GetBatteryAmountIndicatorVisibility");
		
		UUI_VehicleHUD_C_GetBatteryAmountIndicatorVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VehicleHUD.UI_VehicleHUD_C.GetFuelAmountIndicatorVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_VehicleHUD_C::GetFuelAmountIndicatorVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.GetFuelAmountIndicatorVisibility");
		
		UUI_VehicleHUD_C_GetFuelAmountIndicatorVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VehicleHUD.UI_VehicleHUD_C.GetHealthBarCaption
	 * 		Flags  -> ()
	 */
	class FText UUI_VehicleHUD_C::GetHealthBarCaption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.GetHealthBarCaption");
		
		UUI_VehicleHUD_C_GetHealthBarCaption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VehicleHUD.UI_VehicleHUD_C.GetMainVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_VehicleHUD_C::GetMainVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.GetMainVisibility");
		
		UUI_VehicleHUD_C_GetMainVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VehicleHUD.UI_VehicleHUD_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_VehicleHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.Tick");
		
		UUI_VehicleHUD_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VehicleHUD.UI_VehicleHUD_C.ExecuteUbergraph_UI_VehicleHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_VehicleHUD_C::ExecuteUbergraph_UI_VehicleHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.ExecuteUbergraph_UI_VehicleHUD");
		
		UUI_VehicleHUD_C_ExecuteUbergraph_UI_VehicleHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_VehicleHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_VehicleHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_VehicleHUD.UI_VehicleHUD_C");
		return ptr;
	}

}


