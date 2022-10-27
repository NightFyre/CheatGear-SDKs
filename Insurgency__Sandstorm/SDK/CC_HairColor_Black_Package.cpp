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
	 * 		Name   -> PredefinedFunction UCC_HairColor_Black_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCC_HairColor_Black_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CC_HairColor_Black.CC_HairColor_Black_C");
		return ptr;
	}

}


