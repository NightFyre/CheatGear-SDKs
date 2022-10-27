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
	 * 		Name   -> PredefinedFunction ABP_PlaceableActorItems_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlaceableActorItems_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlaceableActorItems.BP_PlaceableActorItems_C");
		return ptr;
	}

}


