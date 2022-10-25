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
	 * 		Name   -> PredefinedFunction ABeltLink_MG3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABeltLink_MG3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BeltLink_MG3.BeltLink_MG3_C");
		return ptr;
	}

}


