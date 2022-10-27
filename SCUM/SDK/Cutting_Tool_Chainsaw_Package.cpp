/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction UCutting_Tool_Chainsaw_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCutting_Tool_Chainsaw_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cutting_Tool_Chainsaw.Cutting_Tool_Chainsaw_C");
		return ptr;
	}

}


