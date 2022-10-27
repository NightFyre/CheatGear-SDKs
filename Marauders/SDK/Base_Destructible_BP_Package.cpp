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
	 * 		Name   -> PredefinedFunction ABase_Destructible_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_Destructible_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_Destructible_BP.Base_Destructible_BP_C");
		return ptr;
	}

}


