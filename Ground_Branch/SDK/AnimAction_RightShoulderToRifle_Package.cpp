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
	 * 		Name   -> PredefinedFunction UAnimAction_RightShoulderToRifle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimAction_RightShoulderToRifle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimAction_RightShoulderToRifle.AnimAction_RightShoulderToRifle_C");
		return ptr;
	}

}


