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
	 * 		Name   -> PredefinedFunction UFeelingHot_Moderate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFeelingHot_Moderate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FeelingHot_Moderate.FeelingHot_Moderate_C");
		return ptr;
	}

}


