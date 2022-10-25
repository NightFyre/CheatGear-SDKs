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
	 * 		Name   -> PredefinedFunction UCB_GrayManSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCB_GrayManSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CB_GrayManSet.CB_GrayManSet_C");
		return ptr;
	}

}


