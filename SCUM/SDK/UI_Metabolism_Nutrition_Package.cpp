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
	 * 		Name   -> Function UI_Metabolism_Nutrition.UI_Metabolism_Nutrition_C.Get__rpb_Water_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_Nutrition_C::Get__rpb_Water_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_Nutrition.UI_Metabolism_Nutrition_C.Get__rpb_Water_ToolTipWidget_1");
		
		UUI_Metabolism_Nutrition_C_Get__rpb_Water_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Metabolism_Nutrition.UI_Metabolism_Nutrition_C.Get__rpb_Calories_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_Nutrition_C::Get__rpb_Calories_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_Nutrition.UI_Metabolism_Nutrition_C.Get__rpb_Calories_ToolTipWidget_1");
		
		UUI_Metabolism_Nutrition_C_Get__rpb_Calories_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Metabolism_Nutrition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Metabolism_Nutrition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Metabolism_Nutrition.UI_Metabolism_Nutrition_C");
		return ptr;
	}

}


