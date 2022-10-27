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
	 * 		Name   -> PredefinedFunction UUI_Child_Metabolism_APB_BodyEffect_Big_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Child_Metabolism_APB_BodyEffect_Big_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Child_Metabolism_APB_BodyEffect_Big.UI_Child_Metabolism_APB_BodyEffect_Big_C");
		return ptr;
	}

}


