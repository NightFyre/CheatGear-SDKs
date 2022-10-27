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
	 * 		Name   -> PredefinedFunction APickup_Season01_HalloweenShard_Intro_Remainder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APickup_Season01_HalloweenShard_Intro_Remainder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Pickup_Season01_HalloweenShard_Intro_Remainder.Pickup_Season01_HalloweenShard_Intro_Remainder_C");
		return ptr;
	}

}


