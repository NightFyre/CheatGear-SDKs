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
	 * 		Name   -> PredefinedFunction UAbility_EG_TriggerWhileSliding_AccuracyHandling_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_EG_TriggerWhileSliding_AccuracyHandling_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_EG_TriggerWhileSliding_AccuracyHandling.Ability_EG_TriggerWhileSliding_AccuracyHandling_C");
		return ptr;
	}

}


