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
	 * 		Name   -> PredefinedFunction UDiscoveryChallege_Ixora_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscoveryChallege_Ixora_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DiscoveryChallege_Ixora_Parent.DiscoveryChallege_Ixora_Parent_C");
		return ptr;
	}

}

