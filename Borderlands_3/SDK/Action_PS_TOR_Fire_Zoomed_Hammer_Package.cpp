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
	 * 		Name   -> PredefinedFunction UAction_PS_TOR_Fire_Zoomed_Hammer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_PS_TOR_Fire_Zoomed_Hammer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_PS_TOR_Fire_Zoomed_Hammer.Action_PS_TOR_Fire_Zoomed_Hammer_C");
		return ptr;
	}

}

