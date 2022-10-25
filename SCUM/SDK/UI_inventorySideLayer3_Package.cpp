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
	 * 		Name   -> PredefinedFunction UUI_inventorySideLayer3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_inventorySideLayer3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_inventorySideLayer3.UI_inventorySideLayer3_C");
		return ptr;
	}

}


