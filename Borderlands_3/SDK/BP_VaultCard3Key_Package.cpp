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
	 * 		Name   -> PredefinedFunction ABP_VaultCard3Key_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VaultCard3Key_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VaultCard3Key.BP_VaultCard3Key_C");
		return ptr;
	}

}


