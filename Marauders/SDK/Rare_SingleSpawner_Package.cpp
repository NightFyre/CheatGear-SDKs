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
	 * 		Name   -> PredefinedFunction ARare_SingleSpawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARare_SingleSpawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Rare_SingleSpawner.Rare_SingleSpawner_C");
		return ptr;
	}

}


