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
	 * 		Name   -> PredefinedFunction AStarter_Frigate_01_Interior_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStarter_Frigate_01_Interior_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Starter_Frigate_01_Interior_LevelInstance_246004.Starter_Frigate_01_Interior_C");
		return ptr;
	}

}


