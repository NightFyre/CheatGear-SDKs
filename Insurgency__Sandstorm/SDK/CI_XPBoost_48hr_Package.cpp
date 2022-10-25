/**
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
	 * 		Name   -> PredefinedFunction UCI_XPBoost_48hr_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCI_XPBoost_48hr_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CI_XPBoost_48hr.CI_XPBoost_48hr_C");
		return ptr;
	}

}


