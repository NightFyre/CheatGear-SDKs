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
	 * 		Name   -> PredefinedFunction UAction_AR_COV_PickupEquip_Start_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_AR_COV_PickupEquip_Start_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_AR_COV_PickupEquip_Start_02.Action_AR_COV_PickupEquip_Start_02_C");
		return ptr;
	}

}


