﻿/**
 * Name: Dark_and_Darker
 * Version: Playtest_3_Hotfix_1
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
	 * 		Name   -> PredefinedFunction UGA_WizardStaffCasting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_WizardStaffCasting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_WizardStaffCasting.GA_WizardStaffCasting_C");
		return ptr;
	}

}

