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
	 * 		Name   -> PredefinedFunction UTitle_AF_LegendaryHunterofTheAncientTerror_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitle_AF_LegendaryHunterofTheAncientTerror_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Title_AF_LegendaryHunterofTheAncientTerror.Title_AF_LegendaryHunterofTheAncientTerror_C");
		return ptr;
	}

}

