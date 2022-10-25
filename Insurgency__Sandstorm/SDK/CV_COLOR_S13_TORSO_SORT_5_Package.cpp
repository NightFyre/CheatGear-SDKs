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
	 * 		Name   -> PredefinedFunction UCV_COLOR_S13_TORSO_SORT_4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCV_COLOR_S13_TORSO_SORT_4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CV_COLOR_S13_TORSO_SORT_5.CV_COLOR_S13_TORSO_SORT_4_C");
		return ptr;
	}

}


