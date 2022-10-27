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
	 * 		Name   -> PredefinedFunction UDeathGib_SpiderantLarge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeathGib_SpiderantLarge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeathGib_SpiderantLarge.DeathGib_SpiderantLarge_C");
		return ptr;
	}

}


