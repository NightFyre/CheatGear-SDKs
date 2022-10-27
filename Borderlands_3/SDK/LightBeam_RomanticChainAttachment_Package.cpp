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
	 * 		Name   -> PredefinedFunction ULightBeam_RomanticChainAttachment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightBeam_RomanticChainAttachment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightBeam_RomanticChainAttachment.LightBeam_RomanticChainAttachment_C");
		return ptr;
	}

}


