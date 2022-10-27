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
	 * 		Name   -> PredefinedFunction UCaptainsLogCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaptainsLogCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CaptainsLogCategory.CaptainsLogCategory_C");
		return ptr;
	}

}


