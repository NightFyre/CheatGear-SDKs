/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction USDLetter_ExclusionEntitlement_Campaign037_Goodwill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDLetter_ExclusionEntitlement_Campaign037_Goodwill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SDLetter_ExclusionEntitlement_Campaign037_Goodwill.SDLetter_ExclusionEntitlement_Campaign037_Goodwill_C");
		return ptr;
	}

}


