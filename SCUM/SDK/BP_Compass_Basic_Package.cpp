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
	 * 		Name   -> PredefinedFunction ABP_Compass_Basic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Compass_Basic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Compass_Basic.BP_Compass_Basic_C");
		return ptr;
	}

}


