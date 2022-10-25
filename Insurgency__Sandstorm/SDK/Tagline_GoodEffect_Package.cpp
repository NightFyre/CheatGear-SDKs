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
	 * 		Name   -> PredefinedFunction UTagline_GoodEffect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTagline_GoodEffect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Tagline_GoodEffect.Tagline_GoodEffect_C");
		return ptr;
	}

}


