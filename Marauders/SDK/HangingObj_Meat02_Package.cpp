/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> PredefinedFunction AHangingObj_Meat02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHangingObj_Meat02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HangingObj_Meat02.HangingObj_Meat02_C");
		return ptr;
	}

}


