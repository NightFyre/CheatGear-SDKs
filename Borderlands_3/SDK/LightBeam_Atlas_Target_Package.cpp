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
	 * 		Name   -> PredefinedFunction ULightBeam_Atlas_Target_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightBeam_Atlas_Target_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightBeam_Atlas_Target.LightBeam_Atlas_Target_C");
		return ptr;
	}

}


