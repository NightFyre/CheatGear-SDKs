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
	 * 		Name   -> PredefinedFunction UTitle_AshenWinds_WarsmithOfTheFlame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitle_AshenWinds_WarsmithOfTheFlame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Title_AshenWinds_WarsmithoftheFlame.Title_AshenWinds_WarsmithOfTheFlame_C");
		return ptr;
	}

}


