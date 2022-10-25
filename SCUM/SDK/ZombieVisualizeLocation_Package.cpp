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
	 * 		Name   -> PredefinedFunction UZombieVisualizeLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieVisualizeLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ZombieVisualizeLocation.ZombieVisualizeLocation_C");
		return ptr;
	}

}


