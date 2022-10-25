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
	 * 		Name   -> PredefinedFunction UActionContainer_ShieldImpact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionContainer_ShieldImpact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionContainer_ShieldImpact.ActionContainer_ShieldImpact_C");
		return ptr;
	}

}


