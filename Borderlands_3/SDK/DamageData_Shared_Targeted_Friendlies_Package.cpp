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
	 * 		Name   -> PredefinedFunction UDamageData_Shared_Targeted_Friendlies_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageData_Shared_Targeted_Friendlies_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DamageData_Shared_Targeted_Friendlies.DamageData_Shared_Targeted_Friendlies_C");
		return ptr;
	}

}


