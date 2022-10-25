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
	 * 		Name   -> PredefinedFunction UOakLightBeam_StaticField_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakLightBeam_StaticField_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakLightBeam_StaticField.OakLightBeam_StaticField_C");
		return ptr;
	}

}


