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
	 * 		Name   -> PredefinedFunction UCV_PATTERNS_ID_IK_I1_I6_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCV_PATTERNS_ID_IK_I1_I6_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CV_PATTERNS_ID_IK_I1_I6.CV_PATTERNS_ID-IK_I1-I6_C");
		return ptr;
	}

}


