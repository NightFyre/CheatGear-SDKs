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
	 * 		Name   -> PredefinedFunction UChallenge_Sabotage_Desolate2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_Sabotage_Desolate2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Sabotage_Desolate2.Challenge_Sabotage_Desolate2_C");
		return ptr;
	}

}


