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
	 * 		Name   -> PredefinedFunction UAA_Gunner_Point_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAA_Gunner_Point_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AA_Gunner_Point.AA_Gunner_Point_C");
		return ptr;
	}

}


