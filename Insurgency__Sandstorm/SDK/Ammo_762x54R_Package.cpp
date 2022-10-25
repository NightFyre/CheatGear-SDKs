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
	 * 		Name   -> PredefinedFunction UAmmo_762x54R_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmmo_762x54R_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Ammo_762x54R.Ammo_762x54R_C");
		return ptr;
	}

}


