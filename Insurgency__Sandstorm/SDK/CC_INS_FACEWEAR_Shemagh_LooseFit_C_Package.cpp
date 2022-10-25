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
	 * 		Name   -> PredefinedFunction UCC_INS_FACEWEAR_Shemagh_LooseFit_C_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCC_INS_FACEWEAR_Shemagh_LooseFit_C_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CC_INS_FACEWEAR_Shemagh_LooseFit_C.CC_INS_FACEWEAR_Shemagh_LooseFit_C_C");
		return ptr;
	}

}


