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
	 * 		Name   -> PredefinedFunction UA4Way_Skag_Stagger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA4Way_Skag_Stagger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A4Way_Skag_Stagger.A4Way_Skag_Stagger_C");
		return ptr;
	}

}


