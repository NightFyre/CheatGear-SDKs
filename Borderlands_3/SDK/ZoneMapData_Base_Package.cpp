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
	 * 		Name   -> PredefinedFunction UZoneMapData_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZoneMapData_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ZoneMapData_Base.ZoneMapData_Base_C");
		return ptr;
	}

}


