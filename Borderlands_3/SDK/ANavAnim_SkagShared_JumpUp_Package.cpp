﻿/**
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
	 * 		Name   -> PredefinedFunction UANavAnim_SkagShared_JumpUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANavAnim_SkagShared_JumpUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ANavAnim_SkagShared_JumpUp.ANavAnim_SkagShared_JumpUp_C");
		return ptr;
	}

}


