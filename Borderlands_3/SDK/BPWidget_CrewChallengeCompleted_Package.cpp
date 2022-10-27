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
	 * 		Name   -> PredefinedFunction UBPWidget_CrewChallengeCompleted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWidget_CrewChallengeCompleted_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_CrewChallengeCompleted.BPWidget_CrewChallengeCompleted_C");
		return ptr;
	}

}


