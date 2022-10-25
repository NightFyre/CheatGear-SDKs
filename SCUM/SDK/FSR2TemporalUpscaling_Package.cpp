/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction UFSR2Settings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFSR2Settings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSR2TemporalUpscaling.FSR2Settings");
		return ptr;
	}

}


