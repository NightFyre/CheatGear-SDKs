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
	 * 		Name   -> PredefinedFunction UElementalEffectCollection_MAL_SMG_Tracer_Barrel_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElementalEffectCollection_MAL_SMG_Tracer_Barrel_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElementalEffectCollection_MAL_SMG_Tracer_Barrel_02.ElementalEffectCollection_MAL_SMG_Tracer_Barrel_02_C");
		return ptr;
	}

}


