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
	 * 		Name   -> PredefinedFunction ACal_7_62x39mm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACal_7_62x39mm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cal_7_62x39mm.Cal_7_62x39mm_C");
		return ptr;
	}

}


