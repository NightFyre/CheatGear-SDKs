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
	 * 		Name   -> PredefinedFunction USetHealthToItemInHands_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetHealthToItemInHands_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SetHealthToItemInHands.SetHealthToItemInHands_C");
		return ptr;
	}

}


