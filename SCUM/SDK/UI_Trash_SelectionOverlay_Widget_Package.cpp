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
	 * 		Name   -> PredefinedFunction UUI_Trash_SelectionOverlay_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Trash_SelectionOverlay_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Trash_SelectionOverlay_Widget.UI_Trash_SelectionOverlay_Widget_C");
		return ptr;
	}

}


