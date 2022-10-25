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
	 * 		Name   -> PredefinedFunction AMetalCup_Destructible_Child_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMetalCup_Destructible_Child_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MetalCup_Destructible_Child.MetalCup_Destructible_Child_C");
		return ptr;
	}

}


