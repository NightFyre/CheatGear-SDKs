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
	 * 		Name   -> PredefinedFunction UBPLightBeam_Salamander_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPLightBeam_Salamander_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPLightBeam_Salamander.BPLightBeam_Salamander_C");
		return ptr;
	}

}


