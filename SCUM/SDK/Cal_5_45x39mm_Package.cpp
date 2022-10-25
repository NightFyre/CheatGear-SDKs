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
	 * 		Name   -> PredefinedFunction ACal_5_45x39mm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACal_5_45x39mm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cal_5_45x39mm.Cal_5_45x39mm_C");
		return ptr;
	}

}


