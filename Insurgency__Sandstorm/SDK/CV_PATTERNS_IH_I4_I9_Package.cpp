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
	 * 		Name   -> PredefinedFunction UCV_PATTERNS_IH_I4_I9_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCV_PATTERNS_IH_I4_I9_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CV_PATTERNS_IH_I4_I9.CV_PATTERNS_IH_I4-I9_C");
		return ptr;
	}

}


