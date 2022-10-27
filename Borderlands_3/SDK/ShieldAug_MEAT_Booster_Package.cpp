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
	 * 		Name   -> PredefinedFunction UShieldAug_MEAT_Booster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShieldAug_MEAT_Booster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_MEAT_Booster.ShieldAug_MEAT_Booster_C");
		return ptr;
	}

}


