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
	 * 		Name   -> PredefinedFunction ABP_M83_Smoke_White_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_M83_Smoke_White_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_M83_Smoke_White.BP_M83_Smoke_White_C");
		return ptr;
	}

}


