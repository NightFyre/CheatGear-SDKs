﻿/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UHCLetter_ExclusionEntitlement_Campaign031_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHCLetter_ExclusionEntitlement_Campaign031_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HCLetter_ExclusionEntitlement_Campaign031.HCLetter_ExclusionEntitlement_Campaign031_C");
		return ptr;
	}

}


