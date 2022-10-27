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
	 * 		Name   -> PredefinedFunction A1H_ImprovisedKnife_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* A1H_ImprovisedKnife_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass 1H_ImprovisedKnife.1H_ImprovisedKnife_C");
		return ptr;
	}

}


