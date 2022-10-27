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
	 * 		Name   -> PredefinedFunction UHitReactionLayer_Upgrade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitReactionLayer_Upgrade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HitReactionLayer_Upgrade.HitReactionLayer_Upgrade_C");
		return ptr;
	}

}


