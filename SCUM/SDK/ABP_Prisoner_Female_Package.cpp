/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction UABP_Prisoner_Female_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Prisoner_Female_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Prisoner_Female.ABP_Prisoner_Female_C");
		return ptr;
	}

}


