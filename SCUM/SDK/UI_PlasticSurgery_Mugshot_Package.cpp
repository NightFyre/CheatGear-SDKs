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
	 * 		Name   -> PredefinedFunction UUI_PlasticSurgery_Mugshot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PlasticSurgery_Mugshot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PlasticSurgery_Mugshot.UI_PlasticSurgery_Mugshot_C");
		return ptr;
	}

}


