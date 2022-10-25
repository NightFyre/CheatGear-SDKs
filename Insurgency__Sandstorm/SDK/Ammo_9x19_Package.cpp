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
	 * 		Name   -> PredefinedFunction UAmmo_9x19_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmmo_9x19_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Ammo_9x19.Ammo_9x19_C");
		return ptr;
	}

}


