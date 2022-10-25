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
	 * 		Name   -> PredefinedFunction UInit_BH_DropChance_R_Badass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInit_BH_DropChance_R_Badass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Init_BH_DropChance_R_Badass.Init_BH_DropChance_R_Badass_C");
		return ptr;
	}

}


