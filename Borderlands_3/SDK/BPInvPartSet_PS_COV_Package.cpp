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
	 * 		Name   -> PredefinedFunction UBPInvPartSet_PS_COV_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPInvPartSet_PS_COV_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPInvPartSet_PS_COV.BPInvPartSet_PS_COV_C");
		return ptr;
	}

}


