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
	 * 		Name   -> PredefinedFunction AHangingObj_Meat03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHangingObj_Meat03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HangingObj_Meat03.HangingObj_Meat03_C");
		return ptr;
	}

}


