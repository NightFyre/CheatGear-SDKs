/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UAction_AR_JAK_Fire_Crank_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_AR_JAK_Fire_Crank_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_AR_JAK_Fire_Crank.Action_AR_JAK_Fire_Crank_C");
		return ptr;
	}

}


