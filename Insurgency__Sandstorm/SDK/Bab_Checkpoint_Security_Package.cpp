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
	 * 		Name   -> PredefinedFunction ABab_Checkpoint_Security_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABab_Checkpoint_Security_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Bab_Checkpoint_Security.Bab_Checkpoint_Security_C");
		return ptr;
	}

}


