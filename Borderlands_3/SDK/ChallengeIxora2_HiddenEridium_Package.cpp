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
	 * 		Name   -> PredefinedFunction UChallengeIxora2_HiddenEridium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallengeIxora2_HiddenEridium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChallengeIxora2_HiddenEridium.ChallengeIxora2_HiddenEridium_C");
		return ptr;
	}

}


