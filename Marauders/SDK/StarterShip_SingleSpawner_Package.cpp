﻿/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> PredefinedFunction AStarterShip_SingleSpawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStarterShip_SingleSpawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StarterShip_SingleSpawner.StarterShip_SingleSpawner_C");
		return ptr;
	}

}


