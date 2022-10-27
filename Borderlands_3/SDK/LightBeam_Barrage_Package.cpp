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
	 * 		Name   -> PredefinedFunction ULightBeam_Barrage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightBeam_Barrage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightBeam_Barrage.LightBeam_Barrage_C");
		return ptr;
	}

}


