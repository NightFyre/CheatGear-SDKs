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
	 * 		Name   -> PredefinedFunction UADirection_PetLoader_Death_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UADirection_PetLoader_Death_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ADirection_PetLoader_Death.ADirection_PetLoader_Death_C");
		return ptr;
	}

}


