/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> PredefinedFunction ABP_Battlebelt_CB_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Battlebelt_CB_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Battlebelt_CB.BP_Battlebelt_CB_C");
		return ptr;
	}

}


