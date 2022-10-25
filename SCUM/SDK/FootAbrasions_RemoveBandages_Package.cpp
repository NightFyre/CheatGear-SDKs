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
	 * 		Name   -> PredefinedFunction UFootAbrasions_RemoveBandages_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFootAbrasions_RemoveBandages_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FootAbrasions_RemoveBandages.FootAbrasions_RemoveBandages_C");
		return ptr;
	}

}


