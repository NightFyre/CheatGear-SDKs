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
	 * 		Name   -> PredefinedFunction ULightBeam_Weapon_PS_VLA_TaserChain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightBeam_Weapon_PS_VLA_TaserChain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightBeam_Weapon_PS_VLA_TaserChain.LightBeam_Weapon_PS_VLA_TaserChain_C");
		return ptr;
	}

}


