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
	 * 		Name   -> PredefinedFunction UUI_Metabolism_LightItemDisplayPanel_ContainerSetDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Metabolism_LightItemDisplayPanel_ContainerSetDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Metabolism_LightItemDisplayPanel_ContainerSetDisplay.UI_Metabolism_LightItemDisplayPanel_ContainerSetDisplay_C");
		return ptr;
	}

}


