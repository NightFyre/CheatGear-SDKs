/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> PredefinedFunction ARaid_TextRender_Actor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaid_TextRender_Actor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Raid_TextRender_Actor.Raid_TextRender_Actor_C");
		return ptr;
	}

}


