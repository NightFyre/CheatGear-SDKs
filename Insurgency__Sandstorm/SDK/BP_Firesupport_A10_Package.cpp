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
	 * 		Name   -> PredefinedFunction ABP_Firesupport_A10_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Firesupport_A10_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Firesupport_A10.BP_Firesupport_A10_C");
		return ptr;
	}

}


