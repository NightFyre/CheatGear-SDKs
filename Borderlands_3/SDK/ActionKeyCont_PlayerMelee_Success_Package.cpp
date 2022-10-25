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
	 * 		Name   -> PredefinedFunction UActionKeyCont_PlayerMelee_Success_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionKeyCont_PlayerMelee_Success_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionKeyCont_PlayerMelee_Success.ActionKeyCont_PlayerMelee_Success_C");
		return ptr;
	}

}


