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
	 * 		Name   -> PredefinedFunction UAudioLinkSettingsAbstract.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioLinkSettingsAbstract::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioLinkCore.AudioLinkSettingsAbstract");
		return ptr;
	}

}


