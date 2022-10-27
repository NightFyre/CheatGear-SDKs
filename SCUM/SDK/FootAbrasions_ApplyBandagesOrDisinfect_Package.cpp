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
	 * 		Name   -> PredefinedFunction UFootAbrasions_ApplyBandagesOrDisinfect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFootAbrasions_ApplyBandagesOrDisinfect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FootAbrasions_ApplyBandagesOrDisinfect.FootAbrasions_ApplyBandagesOrDisinfect_C");
		return ptr;
	}

}


