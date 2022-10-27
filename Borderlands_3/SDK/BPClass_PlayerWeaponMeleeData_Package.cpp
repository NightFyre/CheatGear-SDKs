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
	 * 		Name   -> PredefinedFunction UBPClass_PlayerWeaponMeleeData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPClass_PlayerWeaponMeleeData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPClass_PlayerWeaponMeleeData.BPClass_PlayerWeaponMeleeData_C");
		return ptr;
	}

}


