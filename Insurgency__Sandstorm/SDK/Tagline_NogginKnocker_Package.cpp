﻿/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction UTagline_NogginKnocker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTagline_NogginKnocker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Tagline_NogginKnocker.Tagline_NogginKnocker_C");
		return ptr;
	}

}

