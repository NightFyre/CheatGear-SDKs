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
	 * 		Name   -> PredefinedFunction UBPCamShake_Damage_Projectile_Med_R_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCamShake_Damage_Projectile_Med_R_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCamShake_Damage_Projectile_Med_R.BPCamShake_Damage_Projectile_Med_R_C");
		return ptr;
	}

}


