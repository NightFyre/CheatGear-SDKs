﻿/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * 		Name   -> PredefinedFunction ABP_Weapon_M4A1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Weapon_M4A1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_M4A1.BP_Weapon_M4A1_C");
		return ptr;
	}

}


