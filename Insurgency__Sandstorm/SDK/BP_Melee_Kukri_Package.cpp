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
	 * 		Name   -> PredefinedFunction ABP_Melee_Kukri_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Melee_Kukri_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Melee_Kukri.BP_Melee_Kukri_C");
		return ptr;
	}

}

