﻿/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> PredefinedFunction AMA_Small_Fan01_Child_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMA_Small_Fan01_Child_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MA_Small_Fan01_Child.MA_Small_Fan01_Child_C");
		return ptr;
	}

}


