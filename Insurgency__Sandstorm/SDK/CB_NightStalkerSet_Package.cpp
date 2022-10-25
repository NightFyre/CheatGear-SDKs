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
	 * 		Name   -> PredefinedFunction UCB_NightStalkerSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCB_NightStalkerSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CB_NightStalkerSet.CB_NightStalkerSet_C");
		return ptr;
	}

}


