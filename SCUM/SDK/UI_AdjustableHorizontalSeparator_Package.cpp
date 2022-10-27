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
	 * 		Name   -> PredefinedFunction UUI_AdjustableHorizontalSeparator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_AdjustableHorizontalSeparator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_AdjustableHorizontalSeparator.UI_AdjustableHorizontalSeparator_C");
		return ptr;
	}

}


