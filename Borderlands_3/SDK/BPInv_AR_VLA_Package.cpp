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
	 * 		Name   -> PredefinedFunction UBPInv_AR_VLA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPInv_AR_VLA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPInv_AR_VLA.BPInv_AR_VLA_C");
		return ptr;
	}

}


