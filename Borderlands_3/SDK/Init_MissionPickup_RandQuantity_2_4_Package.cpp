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
	 * 		Name   -> PredefinedFunction UInit_MissionPickup_RandQuantity_2__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInit_MissionPickup_RandQuantity_2__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Init_MissionPickup_RandQuantity_2_4.Init_MissionPickup_RandQuantity_2-4_C");
		return ptr;
	}

}


