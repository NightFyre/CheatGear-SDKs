﻿/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * 		Name   -> PredefinedFunction ABP_DeathBeetle_Sting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DeathBeetle_Sting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeathBeetle_Sting.BP_DeathBeetle_Sting_C");
		return ptr;
	}

}


