/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction ABP_VehicleSpawner_InsurgentInfantry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VehicleSpawner_InsurgentInfantry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_VehicleSpawner_InsurgentInfantry.BP_VehicleSpawner_InsurgentInfantry_C");
		return ptr;
	}

}


