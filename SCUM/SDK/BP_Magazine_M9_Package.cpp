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
	 * 		Name   -> PredefinedFunction ABP_Magazine_M9_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Magazine_M9_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Magazine_M9.BP_Magazine_M9_C");
		return ptr;
	}

}


