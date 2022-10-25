/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction ABab_Fortifications_Merged_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABab_Fortifications_Merged_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Bab_Fortifications_Merged.Bab_Fortifications_Merged_C");
		return ptr;
	}

}


