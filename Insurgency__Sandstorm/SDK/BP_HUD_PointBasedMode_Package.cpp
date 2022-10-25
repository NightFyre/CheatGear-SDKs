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
	 * 		Name   -> PredefinedFunction ABP_HUD_PointBasedMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HUD_PointBasedMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_HUD_PointBasedMode.BP_HUD_PointBasedMode_C");
		return ptr;
	}

}


