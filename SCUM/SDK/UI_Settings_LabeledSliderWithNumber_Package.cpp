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
	 * 		Name   -> PredefinedFunction UUI_Settings_LabeledSliderWithNumber_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Settings_LabeledSliderWithNumber_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Settings_LabeledSliderWithNumber.UI_Settings_LabeledSliderWithNumber_C");
		return ptr;
	}

}


