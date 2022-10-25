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
	 * 		Name   -> PredefinedFunction UAction_GunnersNest_Idle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_GunnersNest_Idle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_GunnersNest_Idle.Action_GunnersNest_Idle_C");
		return ptr;
	}

}


