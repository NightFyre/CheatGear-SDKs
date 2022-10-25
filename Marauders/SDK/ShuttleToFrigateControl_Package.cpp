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
	 * 		Name   -> PredefinedFunction AShuttleToFrigateControl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShuttleToFrigateControl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShuttleToFrigateControl.ShuttleToFrigateControl_C");
		return ptr;
	}

}


