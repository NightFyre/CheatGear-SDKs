﻿/**
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
	 * 		Name   -> PredefinedFunction UDamageSource_Melee_Grenade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageSource_Melee_Grenade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DamageSource_Melee_Grenade.DamageSource_Melee_Grenade_C");
		return ptr;
	}

}


