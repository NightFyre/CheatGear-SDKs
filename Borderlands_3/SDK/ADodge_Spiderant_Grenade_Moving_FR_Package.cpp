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
	 * 		Name   -> PredefinedFunction UADodge_Spiderant_Grenade_Moving_FR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UADodge_Spiderant_Grenade_Moving_FR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ADodge_Spiderant_Grenade_Moving_FR.ADodge_Spiderant_Grenade_Moving_FR_C");
		return ptr;
	}

}


