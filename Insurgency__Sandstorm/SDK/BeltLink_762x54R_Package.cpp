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
	 * 		Name   -> PredefinedFunction ABeltLink_762x54R_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABeltLink_762x54R_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BeltLink_762x54R.BeltLink_762x54R_C");
		return ptr;
	}

}


