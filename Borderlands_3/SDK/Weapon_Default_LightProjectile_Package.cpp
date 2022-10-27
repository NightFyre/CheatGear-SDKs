/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UWeapon_Default_LightProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeapon_Default_LightProjectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Default_LightProjectile.Weapon_Default_LightProjectile_C");
		return ptr;
	}

}


