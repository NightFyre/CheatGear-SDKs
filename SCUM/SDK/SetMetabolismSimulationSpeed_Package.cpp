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
	 * 		Name   -> PredefinedFunction USetMetabolismSimulationSpeed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetMetabolismSimulationSpeed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SetMetabolismSimulationSpeed.SetMetabolismSimulationSpeed_C");
		return ptr;
	}

}


