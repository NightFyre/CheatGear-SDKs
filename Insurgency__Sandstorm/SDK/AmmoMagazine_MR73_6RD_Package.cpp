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
	 * 		Name   -> PredefinedFunction UAmmoMagazine_MR73_6RD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmmoMagazine_MR73_6RD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmmoMagazine_MR73_6RD.AmmoMagazine_MR73_6RD_C");
		return ptr;
	}

}


