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
	 * 		Name   -> PredefinedFunction AMetalCup_Destructible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMetalCup_Destructible_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MetalCup_Destructible.MetalCup_Destructible_C");
		return ptr;
	}

}


