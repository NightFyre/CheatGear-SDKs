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
	 * 		Name   -> PredefinedFunction ARadiateDamageActor_PetSkag_Barf_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARadiateDamageActor_PetSkag_Barf_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RadiateDamageActor_PetSkag_Barf.RadiateDamageActor_PetSkag_Barf_C");
		return ptr;
	}

}


