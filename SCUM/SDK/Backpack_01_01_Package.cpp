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
	 * 		Name   -> PredefinedFunction ABackpack_01_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABackpack_01_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Backpack_01_01.Backpack_01_01_C");
		return ptr;
	}

}


