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
	 * 		Name   -> PredefinedFunction UChallenge_Collection_ActiveDeadDrop_Towers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_Collection_ActiveDeadDrop_Towers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Collection_ActiveDeadDrop_Towers.Challenge_Collection_ActiveDeadDrop_Towers_C");
		return ptr;
	}

}


