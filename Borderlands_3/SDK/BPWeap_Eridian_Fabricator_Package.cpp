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
	 * 		Name   -> PredefinedFunction ABPWeap_Eridian_Fabricator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPWeap_Eridian_Fabricator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_Eridian_Fabricator.BPWeap_Eridian_Fabricator_C");
		return ptr;
	}

}


