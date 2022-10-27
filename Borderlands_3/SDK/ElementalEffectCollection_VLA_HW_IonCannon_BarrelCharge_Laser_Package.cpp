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
	 * 		Name   -> PredefinedFunction UElementalEffectCollection_VLA_HW_IonCannon_BarrelCharge_Laser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElementalEffectCollection_VLA_HW_IonCannon_BarrelCharge_Laser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElementalEffectCollection_VLA_HW_IonCannon_BarrelCharge_Laser.ElementalEffectCollection_VLA_HW_IonCannon_BarrelCharge_Laser_C");
		return ptr;
	}

}


