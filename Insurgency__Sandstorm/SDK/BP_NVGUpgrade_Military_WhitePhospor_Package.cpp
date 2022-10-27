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
	 * 		Name   -> PredefinedFunction UBP_NVGUpgrade_Military_WhitePhospor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_NVGUpgrade_Military_WhitePhospor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_NVGUpgrade_Military_WhitePhospor.BP_NVGUpgrade_Military_WhitePhospor_C");
		return ptr;
	}

}


