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
	 * 		Name   -> PredefinedFunction UShouldShowOtherPlayerLocations_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShouldShowOtherPlayerLocations_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShouldShowOtherPlayerLocations.ShouldShowOtherPlayerLocations_C");
		return ptr;
	}

}


