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
	 * 		Name   -> PredefinedFunction UCI_WeaponSkin_M14EBR_Hunter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCI_WeaponSkin_M14EBR_Hunter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CI_WeaponSkin_M14EBR_Hunter.CI_WeaponSkin_M14EBR_Hunter_C");
		return ptr;
	}

}


