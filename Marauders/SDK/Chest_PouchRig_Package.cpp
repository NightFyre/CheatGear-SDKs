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
	 * 		Name   -> PredefinedFunction AChest_PouchRig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChest_PouchRig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Chest_PouchRig.Chest_PouchRig_C");
		return ptr;
	}

}


