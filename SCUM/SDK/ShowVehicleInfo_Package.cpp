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
	 * 		Name   -> PredefinedFunction UShowVehicleInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShowVehicleInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShowVehicleInfo.ShowVehicleInfo_C");
		return ptr;
	}

}


