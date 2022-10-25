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
	 * 		Name   -> PredefinedFunction UTagline_DomeDestroyer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTagline_DomeDestroyer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Tagline_DomeDestroyer.Tagline_DomeDestroyer_C");
		return ptr;
	}

}


