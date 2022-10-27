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
	 * 		Name   -> PredefinedFunction UTestChallenge_Crew_Ger_Ballad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestChallenge_Crew_Ger_Ballad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TestChallenge_Crew_Ger_Ballad.TestChallenge_Crew_Ger_Ballad_C");
		return ptr;
	}

}


