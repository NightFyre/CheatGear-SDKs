﻿/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction UBP_DefaultDamageCustomization_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DefaultDamageCustomization_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DefaultDamageCustomization.BP_DefaultDamageCustomization_C");
		return ptr;
	}

}


