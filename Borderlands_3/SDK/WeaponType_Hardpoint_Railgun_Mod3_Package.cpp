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
	 * 		Name   -> PredefinedFunction AWeaponType_Hardpoint_Railgun_Mod3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeaponType_Hardpoint_Railgun_Mod3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponType_Hardpoint_Railgun_Mod3.WeaponType_Hardpoint_Railgun_Mod3_C");
		return ptr;
	}

}


