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
	 * 		Name   -> PredefinedFunction UCV_PATTERNS_IG_I4_I5_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCV_PATTERNS_IG_I4_I5_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CV_PATTERNS_IG_I4_I5.CV_PATTERNS_IG_I4-I5_C");
		return ptr;
	}

}


