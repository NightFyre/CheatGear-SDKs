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
	 * 		Name   -> PredefinedFunction UActionCont_Melee_HW_Success_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionCont_Melee_HW_Success_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionCont_Melee_HW_Success.ActionCont_Melee_HW_Success_C");
		return ptr;
	}

}


