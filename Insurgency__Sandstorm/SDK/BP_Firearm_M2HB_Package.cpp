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
	 * 		Name   -> PredefinedFunction ABP_Firearm_M2HB_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Firearm_M2HB_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Firearm_M2HB.BP_Firearm_M2HB_C");
		return ptr;
	}

}


