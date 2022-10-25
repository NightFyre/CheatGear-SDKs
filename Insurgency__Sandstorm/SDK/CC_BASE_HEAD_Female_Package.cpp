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
	 * 		Name   -> PredefinedFunction UCC_BASE_HEAD_Female_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCC_BASE_HEAD_Female_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CC_BASE_HEAD_Female.CC_BASE_HEAD_Female_C");
		return ptr;
	}

}


