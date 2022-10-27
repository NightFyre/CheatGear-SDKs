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
	 * 		Name   -> PredefinedFunction UBPInv_SG_TED_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPInv_SG_TED_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPInv_SG_TED.BPInv_SG_TED_C");
		return ptr;
	}

}


