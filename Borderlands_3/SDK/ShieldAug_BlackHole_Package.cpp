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
	 * 		Name   -> PredefinedFunction UShieldAug_BlackHole_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShieldAug_BlackHole_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_BlackHole.ShieldAug_BlackHole_C");
		return ptr;
	}

}


