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
	 * 		Name   -> PredefinedFunction UEffectCollection_Siren_PassiveSkillProjectile_DoUntoOthers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEffectCollection_Siren_PassiveSkillProjectile_DoUntoOthers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EffectCollection_Siren_PassiveSkillProjectile_DoUntoOthers.EffectCollection_Siren_PassiveSkillProjectile_DoUntoOthers_C");
		return ptr;
	}

}


