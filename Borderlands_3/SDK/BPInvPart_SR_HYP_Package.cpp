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
	 * 		Name   -> PredefinedFunction UBPInvPart_SR_HYP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPInvPart_SR_HYP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPInvPart_SR_HYP.BPInvPart_SR_HYP_C");
		return ptr;
	}

}


