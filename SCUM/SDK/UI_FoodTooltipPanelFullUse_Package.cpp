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
	 * 		Name   -> PredefinedFunction UUI_FoodTooltipPanelFullUse_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_FoodTooltipPanelFullUse_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_FoodTooltipPanelFullUse.UI_FoodTooltipPanelFullUse_C");
		return ptr;
	}

}


