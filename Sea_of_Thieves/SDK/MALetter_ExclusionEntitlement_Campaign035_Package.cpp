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
	 * 		Name   -> PredefinedFunction UMALetter_ExclusionEntitlement_Campaign035_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMALetter_ExclusionEntitlement_Campaign035_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MALetter_ExclusionEntitlement_Campaign035.MALetter_ExclusionEntitlement_Campaign035_C");
		return ptr;
	}

}


