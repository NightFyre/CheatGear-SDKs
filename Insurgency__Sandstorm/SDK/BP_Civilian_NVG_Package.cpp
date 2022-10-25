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
	 * 		Name   -> PredefinedFunction ABP_Civilian_NVG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Civilian_NVG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Civilian_NVG.BP_Civilian_NVG_C");
		return ptr;
	}

}


