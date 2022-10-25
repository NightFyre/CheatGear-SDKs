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
	 * 		Name   -> PredefinedFunction UKillBoxGasPoisoningUIData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillBoxGasPoisoningUIData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KillBoxGasPoisoningUIData.KillBoxGasPoisoningUIData_C");
		return ptr;
	}

}


