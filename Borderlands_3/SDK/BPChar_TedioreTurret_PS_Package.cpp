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
	 * 		Name   -> PredefinedFunction ABPChar_TedioreTurret_PS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_TedioreTurret_PS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_TedioreTurret_PS.BPChar_TedioreTurret_PS_C");
		return ptr;
	}

}


