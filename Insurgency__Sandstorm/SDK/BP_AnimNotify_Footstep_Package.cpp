/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction UBP_AnimNotify_Footstep_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AnimNotify_Footstep_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_AnimNotify_Footstep.BP_AnimNotify_Footstep_C");
		return ptr;
	}

}


