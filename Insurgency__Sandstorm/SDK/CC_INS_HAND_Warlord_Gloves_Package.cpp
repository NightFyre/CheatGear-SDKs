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
	 * 		Name   -> PredefinedFunction UCC_INS_HAND_Warlord_Gloves_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCC_INS_HAND_Warlord_Gloves_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CC_INS_HAND_Warlord_Gloves.CC_INS_HAND_Warlord_Gloves_C");
		return ptr;
	}

}


