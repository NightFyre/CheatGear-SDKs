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
	 * 		Name   -> PredefinedFunction UIbotenicAcidPoisoning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIbotenicAcidPoisoning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IbotenicAcidPoisoning.IbotenicAcidPoisoning_C");
		return ptr;
	}

}


