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
	 * 		Name   -> PredefinedFunction UVC3_WeeklyChallenge_KillEnvNekro_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVC3_WeeklyChallenge_KillEnvNekro_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VC3_WeeklyChallenge_KillEnvNekro.VC3_WeeklyChallenge_KillEnvNekro_C");
		return ptr;
	}

}


