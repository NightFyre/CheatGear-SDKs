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
	 * 		Name   -> PredefinedFunction UCC_SEC_HAIR_MopTop_Male_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCC_SEC_HAIR_MopTop_Male_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CC_SEC_HAIR_MopTop_Male.CC_SEC_HAIR_MopTop_Male_C");
		return ptr;
	}

}


