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
	 * 		Name   -> PredefinedFunction UCB_UpriserSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCB_UpriserSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CB_UpriserSet.CB_UpriserSet_C");
		return ptr;
	}

}


