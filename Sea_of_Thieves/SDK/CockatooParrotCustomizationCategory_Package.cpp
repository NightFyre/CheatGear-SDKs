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
	 * 		Name   -> PredefinedFunction UCockatooParrotCustomizationCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCockatooParrotCustomizationCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CockatooParrotCustomizationCategory.CockatooParrotCustomizationCategory_C");
		return ptr;
	}

}


