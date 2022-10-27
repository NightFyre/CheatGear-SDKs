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
	 * 		Name   -> PredefinedFunction UFeelingCold_Moderate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFeelingCold_Moderate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FeelingCold_Moderate.FeelingCold_Moderate_C");
		return ptr;
	}

}


