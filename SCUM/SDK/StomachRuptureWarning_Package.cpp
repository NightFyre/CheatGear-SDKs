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
	 * 		Name   -> PredefinedFunction UStomachRuptureWarning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStomachRuptureWarning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StomachRuptureWarning.StomachRuptureWarning_C");
		return ptr;
	}

}


