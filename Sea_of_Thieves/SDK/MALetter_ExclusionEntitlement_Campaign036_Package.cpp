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
	 * 		Name   -> PredefinedFunction UMALetter_ExclusionEntitlement_Campaign036_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMALetter_ExclusionEntitlement_Campaign036_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MALetter_ExclusionEntitlement_Campaign036.MALetter_ExclusionEntitlement_Campaign036_C");
		return ptr;
	}

}

