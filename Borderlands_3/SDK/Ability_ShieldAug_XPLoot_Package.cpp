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
	 * 		Name   -> PredefinedFunction UAbility_ShieldAug_XPLoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_ShieldAug_XPLoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_ShieldAug_XPLoot.Ability_ShieldAug_XPLoot_C");
		return ptr;
	}

}


