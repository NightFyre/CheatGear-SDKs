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
	 * 		Name   -> PredefinedFunction ABP_AN_PEQ15_Tan_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AN_PEQ15_Tan_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AN_PEQ15_Tan.BP_AN_PEQ15_Tan_C");
		return ptr;
	}

}


