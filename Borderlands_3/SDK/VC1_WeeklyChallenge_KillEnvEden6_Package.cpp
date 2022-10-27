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
	 * 		Name   -> PredefinedFunction UVC1_WeeklyChallenge_KillEnvEden6_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVC1_WeeklyChallenge_KillEnvEden6_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VC1_WeeklyChallenge_KillEnvEden6.VC1_WeeklyChallenge_KillEnvEden6_C");
		return ptr;
	}

}


