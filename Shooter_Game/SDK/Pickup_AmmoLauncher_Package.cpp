/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * 		Name   -> PredefinedFunction APickup_AmmoLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APickup_AmmoLauncher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Pickup_AmmoLauncher.Pickup_AmmoLauncher_C");
		return ptr;
	}

}


