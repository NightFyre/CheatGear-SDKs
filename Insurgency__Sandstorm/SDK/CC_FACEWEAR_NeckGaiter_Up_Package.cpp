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
	 * 		Name   -> PredefinedFunction UCC_FACEWEAR_NeckGaiter_Up_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCC_FACEWEAR_NeckGaiter_Up_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CC_FACEWEAR_NeckGaiter_Up.CC_FACEWEAR_NeckGaiter_Up_C");
		return ptr;
	}

}


