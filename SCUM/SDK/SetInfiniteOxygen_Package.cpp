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
	 * 		Name   -> PredefinedFunction USetInfiniteOxygen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetInfiniteOxygen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SetInfiniteOxygen.SetInfiniteOxygen_C");
		return ptr;
	}

}


