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
	 * 		Name   -> PredefinedFunction UCC_SEC_Camo_S15_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCC_SEC_Camo_S15_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CC_SEC_Camo_S15.CC_SEC_Camo_S15_C");
		return ptr;
	}

}


