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
	 * 		Name   -> PredefinedFunction ABPClass_Customization_RoomDecoration_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPClass_Customization_RoomDecoration_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPClass_Customization_RoomDecoration.BPClass_Customization_RoomDecoration_C");
		return ptr;
	}

}


