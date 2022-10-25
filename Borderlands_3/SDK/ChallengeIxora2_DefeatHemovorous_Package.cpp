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
	 * 		Name   -> PredefinedFunction UChallengeIxora2_DefeatHemovorous_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallengeIxora2_DefeatHemovorous_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChallengeIxora2_DefeatHemovorous.ChallengeIxora2_DefeatHemovorous_C");
		return ptr;
	}

}


