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
	 * 		Name   -> PredefinedFunction UAHitReact_Spiderant_Flinch_L_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAHitReact_Spiderant_Flinch_L_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_Spiderant_Flinch_L.AHitReact_Spiderant_Flinch_L_C");
		return ptr;
	}

}


