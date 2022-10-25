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
	 * 		Name   -> PredefinedFunction UAmmoMagazine_L85A2_Box_TrueGrit_35RD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmmoMagazine_L85A2_Box_TrueGrit_35RD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmmoMagazine_L85A2_Box_TrueGrit_35RD.AmmoMagazine_L85A2_Box_TrueGrit_35RD_C");
		return ptr;
	}

}


