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
	 * 		Name   -> PredefinedFunction UGE_Inf_PhysicalDamageMod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Inf_PhysicalDamageMod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Inf_PhysicalDamageMod.GE_Inf_PhysicalDamageMod_C");
		return ptr;
	}

}

