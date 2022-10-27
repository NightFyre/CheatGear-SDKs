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
	 * 		Name   -> PredefinedFunction ULBeam_CyberCartel_CyberSpike_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULBeam_CyberCartel_CyberSpike_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LBeam_CyberCartel_CyberSpike.LBeam_CyberCartel_CyberSpike_C");
		return ptr;
	}

}


