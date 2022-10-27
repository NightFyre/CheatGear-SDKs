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
	 * 		Name   -> PredefinedFunction ABP_Shirt_FleeceJacket_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Shirt_FleeceJacket_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Shirt_FleeceJacket.BP_Shirt_FleeceJacket_C");
		return ptr;
	}

}


