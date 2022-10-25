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
	 * 		Name   -> PredefinedFunction UTagline_TapTap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTagline_TapTap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Tagline_TapTap.Tagline_TapTap_C");
		return ptr;
	}

}


