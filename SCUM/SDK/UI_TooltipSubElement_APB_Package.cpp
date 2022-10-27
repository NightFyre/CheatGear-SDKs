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
	 * 		Name   -> PredefinedFunction UUI_TooltipSubElement_APB_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TooltipSubElement_APB_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TooltipSubElement_APB.UI_TooltipSubElement_APB_C");
		return ptr;
	}

}


