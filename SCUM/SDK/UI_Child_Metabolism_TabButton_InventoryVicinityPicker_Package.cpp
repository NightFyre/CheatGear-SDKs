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
	 * 		Name   -> PredefinedFunction UUI_Child_Metabolism_TabButton_InventoryVicinityPIcker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Child_Metabolism_TabButton_InventoryVicinityPIcker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Child_Metabolism_TabButton_InventoryVicinityPicker.UI_Child_Metabolism_TabButton_InventoryVicinityPIcker_C");
		return ptr;
	}

}


