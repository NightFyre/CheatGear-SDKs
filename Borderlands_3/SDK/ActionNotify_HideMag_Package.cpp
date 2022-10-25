/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UActionNotify_HideMag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionNotify_HideMag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionNotify_HideMag.ActionNotify_HideMag_C");
		return ptr;
	}

}


