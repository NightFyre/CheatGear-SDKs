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
	 * 		Name   -> PredefinedFunction UCameraBehavior_DefaultFocusDOF_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_DefaultFocusDOF_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CameraBehavior_DefaultFocusDOF.CameraBehavior_DefaultFocusDOF_C");
		return ptr;
	}

}


