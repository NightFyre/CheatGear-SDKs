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
	 * 		Name   -> PredefinedFunction UUI_Metabolism_TissueGroupCheckbox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Metabolism_TissueGroupCheckbox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Metabolism_TissueGroupCheckbox.UI_Metabolism_TissueGroupCheckbox_C");
		return ptr;
	}

}


