﻿/**
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
	 * 		Name   -> PredefinedFunction UAmmoMagazine_GreaseGunBox_30RD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmmoMagazine_GreaseGunBox_30RD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmmoMagazine_GreaseGunBox_30RD.AmmoMagazine_GreaseGunBox_30RD_C");
		return ptr;
	}

}

