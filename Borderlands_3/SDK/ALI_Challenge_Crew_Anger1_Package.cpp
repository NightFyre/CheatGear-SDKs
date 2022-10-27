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
	 * 		Name   -> PredefinedFunction UALI_Challenge_Crew_Anger1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALI_Challenge_Crew_Anger1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ALI_Challenge_Crew_Anger1.ALI_Challenge_Crew_Anger1_C");
		return ptr;
	}

}


