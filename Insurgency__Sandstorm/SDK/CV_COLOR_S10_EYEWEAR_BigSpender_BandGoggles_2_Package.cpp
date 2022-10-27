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
	 * 		Name   -> PredefinedFunction UCV_COLOR_S10_EYEWEAR_BigSpender_BandGoggles_1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCV_COLOR_S10_EYEWEAR_BigSpender_BandGoggles_1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CV_COLOR_S10_EYEWEAR_BigSpender_BandGoggles_2.CV_COLOR_S10_EYEWEAR_BigSpender_BandGoggles_1_C");
		return ptr;
	}

}


