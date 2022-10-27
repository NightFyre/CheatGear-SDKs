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
	 * 		Name   -> PredefinedFunction AFrigInteriorSpawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFrigInteriorSpawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrigInteriorSpawn.FrigInteriorSpawn_C");
		return ptr;
	}

}


