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
	 * 		Name   -> PredefinedFunction UAnimNotify_TestingNotify_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_TestingNotify_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass AnimNotify_TestingNotify.AnimNotify_TestingNotify_C");
		return ptr;
	}

}


