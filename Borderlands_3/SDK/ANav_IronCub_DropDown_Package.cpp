/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UANav_IronCub_DropDown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANav_IronCub_DropDown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ANav_IronCub_DropDown.ANav_IronCub_DropDown_C");
		return ptr;
	}

}


