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
	 * 		Name   -> PredefinedFunction UAction_FalconStrike_Fire_DangerClose_L_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_FalconStrike_Fire_DangerClose_L_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_FalconStrike_Fire_DangerClose_L.Action_FalconStrike_Fire_DangerClose_L_C");
		return ptr;
	}

}


