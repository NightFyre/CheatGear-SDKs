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
	 * 		Name   -> PredefinedFunction ALock_Items_Medium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALock_Items_Medium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Lock_Items_Medium.Lock_Items_Medium_C");
		return ptr;
	}

}


