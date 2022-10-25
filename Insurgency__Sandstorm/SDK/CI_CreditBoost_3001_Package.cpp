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
	 * 		Name   -> PredefinedFunction UCI_CreditBoost_3000_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCI_CreditBoost_3000_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CI_CreditBoost_3001.CI_CreditBoost_3000_C");
		return ptr;
	}

}


