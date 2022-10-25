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
	 * 		Name   -> PredefinedFunction UCE_BloodyHarvest_HauntedEnemy_Loot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCE_BloodyHarvest_HauntedEnemy_Loot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CE_BloodyHarvest_HauntedEnemy_Loot.CE_BloodyHarvest_HauntedEnemy_Loot_C");
		return ptr;
	}

}


