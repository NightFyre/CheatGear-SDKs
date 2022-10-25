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
	 * 		Name   -> PredefinedFunction URandomAction_TED_SG_Reload_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URandomAction_TED_SG_Reload_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RandomAction_TED_SG_Reload.RandomAction_TED_SG_Reload_C");
		return ptr;
	}

}


