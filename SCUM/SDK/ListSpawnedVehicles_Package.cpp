/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction UListSpawnedVehicles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UListSpawnedVehicles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ListSpawnedVehicles.ListSpawnedVehicles_C");
		return ptr;
	}

}


