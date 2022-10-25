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
	 * 		Name   -> PredefinedFunction UCB_DesertHexSkinSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCB_DesertHexSkinSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CB_DesertHexSkinSet.CB_DesertHexSkinSet_C");
		return ptr;
	}

}


