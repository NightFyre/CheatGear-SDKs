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
	 * 		Name   -> PredefinedFunction UDamageSource_Bullet_PS_FrozenDevil_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageSource_Bullet_PS_FrozenDevil_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DamageSource_Bullet_PS_FrozenDevil.DamageSource_Bullet_PS_FrozenDevil_C");
		return ptr;
	}

}


