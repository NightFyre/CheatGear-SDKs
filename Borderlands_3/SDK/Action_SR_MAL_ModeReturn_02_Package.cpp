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
	 * 		Name   -> PredefinedFunction UAction_SR_MAL_ModeReturn_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_SR_MAL_ModeReturn_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_SR_MAL_ModeReturn_02.Action_SR_MAL_ModeReturn_02_C");
		return ptr;
	}

}


