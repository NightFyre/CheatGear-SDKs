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
	 * 		Name   -> PredefinedFunction AImprovised_Wooden_Spear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AImprovised_Wooden_Spear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Improvised_Wooden_Spear.Improvised_Wooden_Spear_C");
		return ptr;
	}

}


