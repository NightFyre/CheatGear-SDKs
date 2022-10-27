/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UA_IronBear_Stomp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_IronBear_Stomp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_IronBear_Stomp.A_IronBear_Stomp_C");
		return ptr;
	}

}


