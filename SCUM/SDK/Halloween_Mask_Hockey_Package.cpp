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
	 * 		Name   -> PredefinedFunction AHalloween_Mask_Hockey_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHalloween_Mask_Hockey_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Halloween_Mask_Hockey.Halloween_Mask_Hockey_C");
		return ptr;
	}

}


