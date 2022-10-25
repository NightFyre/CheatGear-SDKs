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
	 * 		Name   -> PredefinedFunction UAPhys_Enemy_DeathRagdollNoAnimation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAPhys_Enemy_DeathRagdollNoAnimation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass APhys_Enemy_DeathRagdollNoAnimation.APhys_Enemy_DeathRagdollNoAnimation_C");
		return ptr;
	}

}


