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
	 * 		Name   -> PredefinedFunction ABP_9x19mmFMJ_PROJ_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_9x19mmFMJ_PROJ_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_9x19mmFMJ_PROJ.BP_9x19mmFMJ_PROJ_C");
		return ptr;
	}

}


