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
	 * 		Name   -> PredefinedFunction UUI_CustomZoneSettings_ColorPicker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomZoneSettings_ColorPicker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CustomZoneSettings_ColorPicker.UI_CustomZoneSettings_ColorPicker_C");
		return ptr;
	}

}


