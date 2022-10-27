/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UAction_SM_TED_Fire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_SM_TED_Fire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_SM_TED_Fire.Action_SM_TED_Fire_C");
		return ptr;
	}

}


