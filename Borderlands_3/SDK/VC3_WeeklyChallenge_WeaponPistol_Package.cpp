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
	 * 		Name   -> PredefinedFunction UVC3_WeeklyChallenge_WeaponPistol_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVC3_WeeklyChallenge_WeaponPistol_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VC3_WeeklyChallenge_WeaponPistol.VC3_WeeklyChallenge_WeaponPistol_C");
		return ptr;
	}

}


