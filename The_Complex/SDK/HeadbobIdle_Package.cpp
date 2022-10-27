/**
 * Name: The_Complex
 * Version: 9349459
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
	 * 		Name   -> PredefinedFunction UHeadbobIdle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeadbobIdle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HeadbobIdle.HeadbobIdle_C");
		return ptr;
	}

}


