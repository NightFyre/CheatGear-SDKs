/**
 * Name: The_Complex
 * Version: 9349459
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
	 * 		Name   -> PredefinedFunction UVHS_BlurEdges_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVHS_BlurEdges_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VHS_BlurEdges.VHS_BlurEdges_C");
		return ptr;
	}

}


