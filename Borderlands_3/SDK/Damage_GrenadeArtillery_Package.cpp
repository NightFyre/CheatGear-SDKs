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
	 * 		Name   -> PredefinedFunction UDamage_GrenadeArtillery_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamage_GrenadeArtillery_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Damage_GrenadeArtillery.Damage_GrenadeArtillery_C");
		return ptr;
	}

}


