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
	 * 		Name   -> PredefinedFunction UBeam_TOR_ETech_Thrower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBeam_TOR_ETech_Thrower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Beam_TOR_ETech_Thrower.Beam_TOR_ETech_Thrower_C");
		return ptr;
	}

}


