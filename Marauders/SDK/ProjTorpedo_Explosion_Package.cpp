/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> PredefinedFunction AProjTorpedo_Explosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjTorpedo_Explosion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjTorpedo_Explosion.ProjTorpedo_Explosion_C");
		return ptr;
	}

}


