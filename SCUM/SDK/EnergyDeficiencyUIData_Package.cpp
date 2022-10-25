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
	 * 		Name   -> PredefinedFunction UEnergyDeficiencyUIData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnergyDeficiencyUIData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EnergyDeficiencyUIData.EnergyDeficiencyUIData_C");
		return ptr;
	}

}


