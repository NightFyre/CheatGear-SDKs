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
	 * 		Name   -> PredefinedFunction UShieldAug_Impaler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShieldAug_Impaler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_Impaler.ShieldAug_Impaler_C");
		return ptr;
	}

}


