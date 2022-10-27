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
	 * 		Name   -> PredefinedFunction URemoveFlameOfFateTypeStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveFlameOfFateTypeStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FlamesOfFate.RemoveFlameOfFateTypeStep");
		return ptr;
	}

}


