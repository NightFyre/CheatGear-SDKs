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
	 * 		Name   -> PredefinedFunction AAiFrigateController_Interceptor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAiFrigateController_Interceptor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AiFrigateController_Interceptor.AiFrigateController_Interceptor_C");
		return ptr;
	}

}


