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
	 * 		Name   -> PredefinedFunction AProj_Siren_DLCSkill_WalkingPotato_Attack_1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Siren_DLCSkill_WalkingPotato_Attack_1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Siren_DLCSkill_WalkingPotato_Attack_2.Proj_Siren_DLCSkill_WalkingPotato_Attack_1_C");
		return ptr;
	}

}


