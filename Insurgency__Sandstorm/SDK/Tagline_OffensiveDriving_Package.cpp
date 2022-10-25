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
	 * 		Name   -> PredefinedFunction UTagline_OffensiveDriving_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTagline_OffensiveDriving_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Tagline_OffensiveDriving.Tagline_OffensiveDriving_C");
		return ptr;
	}

}


