/**
 * Name: The_Complex
 * Version: 9349459
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
	 * 		Name   -> PredefinedFunction UOodleNetworkTrainerCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOodleNetworkTrainerCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet");
		return ptr;
	}

}


