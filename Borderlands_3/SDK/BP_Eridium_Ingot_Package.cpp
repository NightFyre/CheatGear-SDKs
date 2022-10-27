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
	 * 		Name   -> PredefinedFunction ABP_Eridium_Ingot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Eridium_Ingot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Eridium_Ingot.BP_Eridium_Ingot_C");
		return ptr;
	}

}


