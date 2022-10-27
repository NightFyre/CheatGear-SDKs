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
	 * 		Name   -> PredefinedFunction UHeadbobCrouching_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeadbobCrouching_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HeadbobCrouching.HeadbobCrouching_C");
		return ptr;
	}

}


