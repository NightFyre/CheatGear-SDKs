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
	 * 		Name   -> PredefinedFunction UUI_Settings_AudioDeviceDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Settings_AudioDeviceDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Settings_AudioDeviceDisplay.UI_Settings_AudioDeviceDisplay_C");
		return ptr;
	}

}


