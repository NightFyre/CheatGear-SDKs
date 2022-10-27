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
	 * 		Name   -> PredefinedFunction UCC_HairColor_Brown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCC_HairColor_Brown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CC_HairColor_Brown.CC_HairColor_Brown_C");
		return ptr;
	}

}


