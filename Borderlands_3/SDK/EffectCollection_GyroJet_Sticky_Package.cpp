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
	 * 		Name   -> PredefinedFunction UEffectCollection_GyroJet_Sticky_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEffectCollection_GyroJet_Sticky_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EffectCollection_GyroJet_Sticky.EffectCollection_GyroJet_Sticky_C");
		return ptr;
	}

}

