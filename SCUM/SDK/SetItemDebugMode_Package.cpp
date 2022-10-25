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
	 * 		Name   -> PredefinedFunction USetItemDebugMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetItemDebugMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SetItemDebugMode.SetItemDebugMode_C");
		return ptr;
	}

}


