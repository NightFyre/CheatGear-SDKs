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
	 * 		Name   -> PredefinedFunction ULightProj_DAL_SR_Fbolt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProj_DAL_SR_Fbolt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightProj_DAL_SR_Fbolt.LightProj_DAL_SR_Fbolt_C");
		return ptr;
	}

}


