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
	 * 		Name   -> PredefinedFunction UCV_COMB_I4_I10_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCV_COMB_I4_I10_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CV_COMB_I4_I10.CV_COMB_I4-I10_C");
		return ptr;
	}

}


