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
	 * 		Name   -> PredefinedFunction ALock_Item_Advanced_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALock_Item_Advanced_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Lock_Item_Advanced.Lock_Item_Advanced_C");
		return ptr;
	}

}


