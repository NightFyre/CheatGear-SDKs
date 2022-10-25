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
	 * 		Name   -> PredefinedFunction UGalaxyMapData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGalaxyMapData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GalaxyMapData.GalaxyMapData_C");
		return ptr;
	}

}


