/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction ABP_BagCraftingMission_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BagCraftingMission_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BagCraftingMission.BP_BagCraftingMission_C");
		return ptr;
	}

}


