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
	 * 		Name   -> PredefinedFunction UAmmoMagazine_M1911_UrbanDigital_10RD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmmoMagazine_M1911_UrbanDigital_10RD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmmoMagazine_M1911_UrbanDigital_10RD.AmmoMagazine_M1911_UrbanDigital_10RD_C");
		return ptr;
	}

}


