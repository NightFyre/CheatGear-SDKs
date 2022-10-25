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
	 * 		Name   -> PredefinedFunction UUI_PreviousNextSwitch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PreviousNextSwitch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PreviousNextSwitch.UI_PreviousNextSwitch_C");
		return ptr;
	}

}


