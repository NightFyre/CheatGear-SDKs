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
	 * 		Name   -> PredefinedFunction ABP_Explosive_PlantableBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Explosive_PlantableBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Explosive_PlantableBase.BP_Explosive_PlantableBase_C");
		return ptr;
	}

}


