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
	 * 		Name   -> PredefinedFunction UCV_COMB_I9_I5_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCV_COMB_I9_I5_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CV_COMB_I9_I5.CV_COMB_I9-I5_C");
		return ptr;
	}

}


