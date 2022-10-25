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
	 * 		Name   -> PredefinedFunction ABP_Projectile_RocketAT4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Projectile_RocketAT4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Projectile_RocketAT4.BP_Projectile_RocketAT4_C");
		return ptr;
	}

}


