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
	 * 		Name   -> PredefinedFunction UElementalEffectCollection_HW_VLA_Barrel_01_A_MuzzleBrake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElementalEffectCollection_HW_VLA_Barrel_01_A_MuzzleBrake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElementalEffectCollection_HW_VLA_Barrel_01_A_MuzzleBrake.ElementalEffectCollection_HW_VLA_Barrel_01_A_MuzzleBrake_C");
		return ptr;
	}

}


