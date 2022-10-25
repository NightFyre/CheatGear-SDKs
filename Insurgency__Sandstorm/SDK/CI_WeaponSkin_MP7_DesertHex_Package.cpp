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
	 * 		Name   -> PredefinedFunction UCI_WeaponSkin_MP7_DesertHex_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCI_WeaponSkin_MP7_DesertHex_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CI_WeaponSkin_MP7_DesertHex.CI_WeaponSkin_MP7_DesertHex_C");
		return ptr;
	}

}


