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
	 * 		Name   -> PredefinedFunction ABPAmmoItem_Heavy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPAmmoItem_Heavy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPAmmoItem_Heavy.BPAmmoItem_Heavy_C");
		return ptr;
	}

}


