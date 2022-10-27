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
	 * 		Name   -> PredefinedFunction AFrigateInside_Fast_Ai_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFrigateInside_Fast_Ai_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrigateInside_Fast_Ai.FrigateInside_Fast_Ai_C");
		return ptr;
	}

}


