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
	 * 		Name   -> PredefinedFunction UInfiniteResource_SaltWater_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInfiniteResource_SaltWater_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InfiniteResource_SaltWater.InfiniteResource_SaltWater_C");
		return ptr;
	}

}


