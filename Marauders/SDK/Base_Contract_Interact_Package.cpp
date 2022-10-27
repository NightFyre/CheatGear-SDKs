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
	 * 		Name   -> PredefinedFunction ABase_Contract_Interact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_Contract_Interact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_Contract_Interact.Base_Contract_Interact_C");
		return ptr;
	}

}


