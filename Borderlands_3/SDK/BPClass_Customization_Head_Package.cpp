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
	 * 		Name   -> PredefinedFunction ABPClass_Customization_Head_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPClass_Customization_Head_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPClass_Customization_Head.BPClass_Customization_Head_C");
		return ptr;
	}

}


