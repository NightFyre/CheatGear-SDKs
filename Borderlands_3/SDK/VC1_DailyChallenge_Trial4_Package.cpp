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
	 * 		Name   -> PredefinedFunction UVC1_DailyChallenge_Trial4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVC1_DailyChallenge_Trial4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VC1_DailyChallenge_Trial4.VC1_DailyChallenge_Trial4_C");
		return ptr;
	}

}


