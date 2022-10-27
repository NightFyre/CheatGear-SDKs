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
	 * 		Name   -> PredefinedFunction UFeelingCold_Severe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFeelingCold_Severe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FeelingCold_Severe.FeelingCold_Severe_C");
		return ptr;
	}

}


