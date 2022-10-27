/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> PredefinedFunction AAiFrigateCapitalController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAiFrigateCapitalController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AiFrigateCapitalController.AiFrigateCapitalController_C");
		return ptr;
	}

}


