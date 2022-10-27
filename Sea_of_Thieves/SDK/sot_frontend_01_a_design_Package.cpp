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
	 * 		Name   -> PredefinedFunction Asot_frontend_01_a_design_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Asot_frontend_01_a_design_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sot_frontend_01_a_design.sot_frontend_01_a_design_C");
		return ptr;
	}

}


