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
	 * 		Name   -> PredefinedFunction UBeam_NotAFlamethrower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBeam_NotAFlamethrower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Beam_NotAFlamethrower.Beam_NotAFlamethrower_C");
		return ptr;
	}

}


