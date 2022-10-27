/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction UBP_MountTypeWeaponMagazine76254_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MountTypeWeaponMagazine76254_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MountTypeWeaponMagazine76254.BP_MountTypeWeaponMagazine76254_C");
		return ptr;
	}

}


