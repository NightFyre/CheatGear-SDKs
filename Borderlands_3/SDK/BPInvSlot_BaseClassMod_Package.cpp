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
	 * 		Name   -> PredefinedFunction UBPInvSlot_BaseClassMod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPInvSlot_BaseClassMod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPInvSlot_BaseClassMod.BPInvSlot_BaseClassMod_C");
		return ptr;
	}

}


