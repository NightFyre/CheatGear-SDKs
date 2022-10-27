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
	 * 		Name   -> PredefinedFunction ABPWeap_SG_Hyperion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPWeap_SG_Hyperion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_SG_Hyperion.BPWeap_SG_Hyperion_C");
		return ptr;
	}

}


