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
	 * 		Name   -> PredefinedFunction ABPFirstPersonConfig_Beastmaster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPFirstPersonConfig_Beastmaster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFirstPersonConfig_Beastmaster.BPFirstPersonConfig_Beastmaster_C");
		return ptr;
	}

}


