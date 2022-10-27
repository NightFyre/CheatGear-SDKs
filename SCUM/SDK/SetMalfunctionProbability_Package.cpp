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
	 * 		Name   -> PredefinedFunction USetMalfunctionProbability_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetMalfunctionProbability_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SetMalfunctionProbability.SetMalfunctionProbability_C");
		return ptr;
	}

}


