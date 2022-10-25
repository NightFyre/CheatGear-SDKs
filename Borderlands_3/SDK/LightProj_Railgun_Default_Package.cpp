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
	 * 		Name   -> PredefinedFunction ULightProj_Railgun_Default_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProj_Railgun_Default_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightProj_Railgun_Default.LightProj_Railgun_Default_C");
		return ptr;
	}

}


