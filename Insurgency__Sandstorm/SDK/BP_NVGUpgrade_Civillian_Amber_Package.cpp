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
	 * 		Name   -> PredefinedFunction UBP_NVGUpgrade_Civillian_Amber_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_NVGUpgrade_Civillian_Amber_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_NVGUpgrade_Civillian_Amber.BP_NVGUpgrade_Civillian_Amber_C");
		return ptr;
	}

}


