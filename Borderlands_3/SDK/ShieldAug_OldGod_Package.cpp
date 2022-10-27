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
	 * 		Name   -> PredefinedFunction UShieldAug_OldGod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShieldAug_OldGod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_OldGod.ShieldAug_OldGod_C");
		return ptr;
	}

}


