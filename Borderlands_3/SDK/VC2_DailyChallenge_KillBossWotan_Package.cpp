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
	 * 		Name   -> PredefinedFunction UVC2_DailyChallenge_KillBossWotan_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVC2_DailyChallenge_KillBossWotan_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VC2_DailyChallenge_KillBossWotan.VC2_DailyChallenge_KillBossWotan_C");
		return ptr;
	}

}


