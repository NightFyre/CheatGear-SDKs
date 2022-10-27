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
	 * 		Name   -> PredefinedFunction UKillBoxGasPoisoning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillBoxGasPoisoning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KillBoxGasPoisoning.KillBoxGasPoisoning_C");
		return ptr;
	}

}


