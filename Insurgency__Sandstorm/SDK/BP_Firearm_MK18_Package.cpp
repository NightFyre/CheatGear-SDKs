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
	 * 		Name   -> PredefinedFunction ABP_Firearm_MK18_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Firearm_MK18_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Firearm_MK18.BP_Firearm_MK18_C");
		return ptr;
	}

}


