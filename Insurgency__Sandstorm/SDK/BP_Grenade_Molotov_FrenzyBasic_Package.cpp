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
	 * 		Name   -> PredefinedFunction ABP_Grenade_Molotov_FrenzyBasic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Grenade_Molotov_FrenzyBasic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Grenade_Molotov_FrenzyBasic.BP_Grenade_Molotov_FrenzyBasic_C");
		return ptr;
	}

}


