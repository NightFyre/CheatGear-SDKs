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
	 * 		Name   -> PredefinedFunction UAnimNotify_MagOut_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_MagOut_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass AnimNotify_MagOut.AnimNotify_MagOut_C");
		return ptr;
	}

}


