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
	 * 		Name   -> PredefinedFunction UBPInvPartSet_AR_TOR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPInvPartSet_AR_TOR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPInvPartSet_AR_TOR.BPInvPartSet_AR_TOR_C");
		return ptr;
	}

}


