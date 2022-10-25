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
	 * 		Name   -> PredefinedFunction ABab_GlobalDay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABab_GlobalDay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Bab_GlobalDay.Bab_GlobalDay_C");
		return ptr;
	}

}


