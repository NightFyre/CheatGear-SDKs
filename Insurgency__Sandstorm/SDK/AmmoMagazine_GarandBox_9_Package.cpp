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
	 * 		Name   -> PredefinedFunction UAmmoMagazine_GarandBox_8_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmmoMagazine_GarandBox_8_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmmoMagazine_GarandBox_9.AmmoMagazine_GarandBox_8_C");
		return ptr;
	}

}


