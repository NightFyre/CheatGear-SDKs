/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> PredefinedFunction UBP_Flashbang_CameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Flashbang_CameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Flashbang_CameraShake.BP_Flashbang_CameraShake_C");
		return ptr;
	}

}


