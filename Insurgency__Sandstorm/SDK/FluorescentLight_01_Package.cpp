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
	 * 		Name   -> PredefinedFunction AFluorescentLight_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFluorescentLight_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass FluorescentLight_01.FluorescentLight_01_C");
		return ptr;
	}

}


