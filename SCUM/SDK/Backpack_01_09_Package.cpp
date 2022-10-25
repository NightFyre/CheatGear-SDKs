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
	 * 		Name   -> PredefinedFunction ABackpack_01_09_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABackpack_01_09_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Backpack_01_09.Backpack_01_09_C");
		return ptr;
	}

}


