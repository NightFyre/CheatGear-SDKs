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
	 * 		Name   -> PredefinedFunction UBP_MountTypeWeaponMagazine54539_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MountTypeWeaponMagazine54539_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MountTypeWeaponMagazine54539.BP_MountTypeWeaponMagazine54539_C");
		return ptr;
	}

}


