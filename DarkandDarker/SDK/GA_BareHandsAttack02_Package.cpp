﻿/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * 		Name   -> PredefinedFunction UGA_BareHandsAttack02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_BareHandsAttack02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_BareHandsAttack02.GA_BareHandsAttack02_C");
		return ptr;
	}

}

