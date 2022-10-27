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
	 * 		Name   -> PredefinedFunction UUI_ItemLightDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ItemLightDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ItemLightDisplay.UI_ItemLightDisplay_C");
		return ptr;
	}

}


