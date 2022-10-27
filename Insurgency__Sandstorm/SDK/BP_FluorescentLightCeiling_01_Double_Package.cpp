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
	 * 		Name   -> PredefinedFunction ABP_FluorescentLightCeiling_01_Double_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FluorescentLightCeiling_01_Double_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_FluorescentLightCeiling_01_Double.BP_FluorescentLightCeiling_01_Double_C");
		return ptr;
	}

}


