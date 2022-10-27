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
	 * 		Name   -> PredefinedFunction UDestroyAllVehicles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDestroyAllVehicles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DestroyAllVehicles.DestroyAllVehicles_C");
		return ptr;
	}

}


