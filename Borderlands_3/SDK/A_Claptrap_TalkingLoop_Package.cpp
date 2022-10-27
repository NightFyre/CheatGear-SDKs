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
	 * 		Name   -> PredefinedFunction UA_Claptrap_TalkingLoop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_Claptrap_TalkingLoop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_Claptrap_TalkingLoop.A_Claptrap_TalkingLoop_C");
		return ptr;
	}

}


