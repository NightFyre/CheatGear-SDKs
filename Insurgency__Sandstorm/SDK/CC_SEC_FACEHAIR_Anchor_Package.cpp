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
	 * 		Name   -> PredefinedFunction UCC_SEC_FACEHAIR_Anchor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCC_SEC_FACEHAIR_Anchor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CC_SEC_FACEHAIR_Anchor.CC_SEC_FACEHAIR_Anchor_C");
		return ptr;
	}

}


