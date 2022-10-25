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
	 * 		Name   -> PredefinedFunction ARifle_M1_Para_Child_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARifle_M1_Para_Child_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Rifle_M1_Para_Child.Rifle_M1_Para_Child_C");
		return ptr;
	}

}


