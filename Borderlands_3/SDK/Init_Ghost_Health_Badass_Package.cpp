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
	 * 		Name   -> PredefinedFunction UInit_Ghost_Health_Badass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInit_Ghost_Health_Badass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Init_Ghost_Health_Badass.Init_Ghost_Health_Badass_C");
		return ptr;
	}

}


