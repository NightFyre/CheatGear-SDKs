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
	 * 		Name   -> PredefinedFunction UBPCamShake_WeaponMelee_PS_Success_Impact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCamShake_WeaponMelee_PS_Success_Impact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCamShake_WeaponMelee_PS_Success_Impact.BPCamShake_WeaponMelee_PS_Success_Impact_C");
		return ptr;
	}

}


