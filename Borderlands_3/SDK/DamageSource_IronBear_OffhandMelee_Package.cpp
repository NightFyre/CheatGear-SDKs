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
	 * 		Name   -> PredefinedFunction UDamageSource_IronBear_OffhandMelee_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageSource_IronBear_OffhandMelee_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DamageSource_IronBear_OffhandMelee.DamageSource_IronBear_OffhandMelee_C");
		return ptr;
	}

}


