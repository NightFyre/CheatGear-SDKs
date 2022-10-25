/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction UCI_WeaponSkin_PF940_TwoTone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCI_WeaponSkin_PF940_TwoTone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CI_WeaponSkin_PF940_TwoTone.CI_WeaponSkin_PF940_TwoTone_C");
		return ptr;
	}

}


