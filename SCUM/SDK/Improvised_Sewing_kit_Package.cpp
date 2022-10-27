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
	 * 		Name   -> PredefinedFunction AImprovised_Sewing_kit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AImprovised_Sewing_kit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Improvised_Sewing_kit.Improvised_Sewing_kit_C");
		return ptr;
	}

}


