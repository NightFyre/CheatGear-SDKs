/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction Asot_frontend_01_a_start_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Asot_frontend_01_a_start_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sot_frontend_01_a_start.sot_frontend_01_a_start_C");
		return ptr;
	}

}


