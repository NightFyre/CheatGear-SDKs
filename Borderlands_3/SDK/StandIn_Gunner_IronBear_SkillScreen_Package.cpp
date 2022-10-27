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
	 * 		Name   -> PredefinedFunction AStandIn_Gunner_IronBear_SkillScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStandIn_Gunner_IronBear_SkillScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Gunner_IronBear_SkillScreen.StandIn_Gunner_IronBear_SkillScreen_C");
		return ptr;
	}

}


