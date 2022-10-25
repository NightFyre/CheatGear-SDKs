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
	 * 		Name   -> PredefinedFunction ABeltLink_M249_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABeltLink_M249_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BeltLink_M249.BeltLink_M249_C");
		return ptr;
	}

}


