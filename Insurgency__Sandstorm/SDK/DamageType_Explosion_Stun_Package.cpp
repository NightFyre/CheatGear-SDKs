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
	 * 		Name   -> PredefinedFunction UDamageType_Explosion_Stun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageType_Explosion_Stun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass DamageType_Explosion_Stun.DamageType_Explosion_Stun_C");
		return ptr;
	}

}


