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
	 * 		Name   -> PredefinedFunction USetInfiniteStamina_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetInfiniteStamina_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SetInfiniteStamina.SetInfiniteStamina_C");
		return ptr;
	}

}


