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
	 * 		Name   -> PredefinedFunction UCV_COLOR_I16_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCV_COLOR_I16_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CV_COLOR_I16.CV_COLOR_I16_C");
		return ptr;
	}

}


