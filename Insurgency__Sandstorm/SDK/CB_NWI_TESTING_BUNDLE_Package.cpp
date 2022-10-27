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
	 * 		Name   -> PredefinedFunction UCB_NWI_TESTING_BUNDLE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCB_NWI_TESTING_BUNDLE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CB_NWI_TESTING_BUNDLE.CB_NWI-TESTING-BUNDLE_C");
		return ptr;
	}

}


