/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction UAmmoContainer_GAU8_Belt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmmoContainer_GAU8_Belt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmmoContainer_GAU8_Belt.AmmoContainer_GAU8_Belt_C");
		return ptr;
	}

}


