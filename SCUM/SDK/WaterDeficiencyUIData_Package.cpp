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
	 * 		Name   -> PredefinedFunction UWaterDeficiencyUIData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterDeficiencyUIData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WaterDeficiencyUIData.WaterDeficiencyUIData_C");
		return ptr;
	}

}


