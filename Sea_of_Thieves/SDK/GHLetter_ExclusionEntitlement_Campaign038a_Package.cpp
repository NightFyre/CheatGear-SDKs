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
	 * 		Name   -> PredefinedFunction UGHLetter_ExclusionEntitlement_Campaign038a_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGHLetter_ExclusionEntitlement_Campaign038a_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GHLetter_ExclusionEntitlement_Campaign038a.GHLetter_ExclusionEntitlement_Campaign038a_C");
		return ptr;
	}

}


