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
	 * 		Name   -> PredefinedFunction ABP_Utility_SECBinoculars_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Utility_SECBinoculars_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Utility_SECBinoculars.BP_Utility_SECBinoculars_C");
		return ptr;
	}

}


