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
	 * 		Name   -> PredefinedFunction ULightProj_Epicenter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProj_Epicenter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightProj_Epicenter.LightProj_Epicenter_C");
		return ptr;
	}

}


