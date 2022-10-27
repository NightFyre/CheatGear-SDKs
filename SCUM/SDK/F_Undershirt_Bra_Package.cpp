/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction AF_Undershirt_Bra_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AF_Undershirt_Bra_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass F_Undershirt_Bra.F_Undershirt_Bra_C");
		return ptr;
	}

}


