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
	 * 		Name   -> PredefinedFunction UCE_AnointedThawing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCE_AnointedThawing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CE_AnointedThawing.CE_AnointedThawing_C");
		return ptr;
	}

}


