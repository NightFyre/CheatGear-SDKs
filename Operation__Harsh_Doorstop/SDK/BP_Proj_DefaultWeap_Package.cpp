/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * 		Name   -> PredefinedFunction ABP_Proj_DefaultWeap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Proj_DefaultWeap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Proj_DefaultWeap.BP_Proj_DefaultWeap_C");
		return ptr;
	}

}


