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
	 * 		Name   -> PredefinedFunction UOOSLetter_ExclusionEntitlement_Campaign034_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOOSLetter_ExclusionEntitlement_Campaign034_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OOSLetter_ExclusionEntitlement_Campaign034.OOSLetter_ExclusionEntitlement_Campaign034_C");
		return ptr;
	}

}


