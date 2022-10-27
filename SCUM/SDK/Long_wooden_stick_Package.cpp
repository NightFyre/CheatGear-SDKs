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
	 * 		Name   -> PredefinedFunction ALong_wooden_stick_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALong_wooden_stick_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Long_wooden_stick.Long_wooden_stick_C");
		return ptr;
	}

}


