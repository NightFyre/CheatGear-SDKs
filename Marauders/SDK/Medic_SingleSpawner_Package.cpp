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
	 * 		Name   -> PredefinedFunction AMedic_SingleSpawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMedic_SingleSpawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Medic_SingleSpawner.Medic_SingleSpawner_C");
		return ptr;
	}

}


