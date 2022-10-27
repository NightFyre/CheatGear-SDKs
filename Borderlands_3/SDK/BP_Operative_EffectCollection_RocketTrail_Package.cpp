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
	 * 		Name   -> PredefinedFunction UBP_Operative_EffectCollection_RocketTrail_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Operative_EffectCollection_RocketTrail_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Operative_EffectCollection_RocketTrail.BP_Operative_EffectCollection_RocketTrail_C");
		return ptr;
	}

}


