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
	 * 		Name   -> PredefinedFunction UBoostOfEnergyUIData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoostOfEnergyUIData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BoostOfEnergyUIData.BoostOfEnergyUIData_C");
		return ptr;
	}

}


