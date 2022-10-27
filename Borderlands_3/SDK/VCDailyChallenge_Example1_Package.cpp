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
	 * 		Name   -> PredefinedFunction UVCDailyChallenge_Example1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVCDailyChallenge_Example1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VCDailyChallenge_Example1.VCDailyChallenge_Example1_C");
		return ptr;
	}

}


