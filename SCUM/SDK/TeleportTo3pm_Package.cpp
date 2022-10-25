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
	 * 		Name   -> PredefinedFunction UTeleportTo3pm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeleportTo3pm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TeleportTo3pm.TeleportTo3pm_C");
		return ptr;
	}

}


