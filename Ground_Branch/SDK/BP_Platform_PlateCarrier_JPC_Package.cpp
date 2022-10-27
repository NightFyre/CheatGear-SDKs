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
	 * 		Name   -> PredefinedFunction ABP_Platform_PlateCarrier_JPC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Platform_PlateCarrier_JPC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Platform_PlateCarrier_JPC.BP_Platform_PlateCarrier_JPC_C");
		return ptr;
	}

}


