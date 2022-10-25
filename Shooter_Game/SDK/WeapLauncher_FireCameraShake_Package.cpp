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
	 * 		Name   -> PredefinedFunction UWeapLauncher_FireCameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeapLauncher_FireCameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapLauncher_FireCameraShake.WeapLauncher_FireCameraShake_C");
		return ptr;
	}

}


