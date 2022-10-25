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
	 * 		Name   -> PredefinedFunction UCV_PATTERNS_IC_IK_I4_I6_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCV_PATTERNS_IC_IK_I4_I6_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CV_PATTERNS_IC_IK_I4_I6.CV_PATTERNS_IC-IK_I4-I6_C");
		return ptr;
	}

}


