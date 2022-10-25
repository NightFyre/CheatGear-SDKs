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
	 * 		Name   -> PredefinedFunction UTagline_MakingEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTagline_MakingEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Tagline_MakingEntry.Tagline_MakingEntry_C");
		return ptr;
	}

}


