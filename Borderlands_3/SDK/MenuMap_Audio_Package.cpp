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
	 * 		Name   -> PredefinedFunction AMenuMap_Audio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMenuMap_Audio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MenuMap_Audio.MenuMap_Audio_C");
		return ptr;
	}

}


