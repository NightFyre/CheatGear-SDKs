﻿/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction AChocolateCandy_11_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChocolateCandy_11_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChocolateCandy_12.ChocolateCandy_11_C");
		return ptr;
	}

}


