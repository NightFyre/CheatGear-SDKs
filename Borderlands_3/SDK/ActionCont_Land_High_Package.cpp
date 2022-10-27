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
	 * 		Name   -> PredefinedFunction UActionCont_Land_High_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionCont_Land_High_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionCont_Land_High.ActionCont_Land_High_C");
		return ptr;
	}

}


