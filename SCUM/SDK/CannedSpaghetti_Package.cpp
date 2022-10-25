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
	 * 		Name   -> PredefinedFunction ACannedSpaghetti_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACannedSpaghetti_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CannedSpaghetti.CannedSpaghetti_C");
		return ptr;
	}

}


