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
	 * 		Name   -> PredefinedFunction ADeskLamp_Destructible_Child_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeskLamp_Destructible_Child_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeskLamp_Destructible_Child.DeskLamp_Destructible_Child_C");
		return ptr;
	}

}


