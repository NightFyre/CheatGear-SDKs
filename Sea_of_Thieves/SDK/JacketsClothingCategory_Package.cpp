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
	 * 		Name   -> PredefinedFunction UJacketsClothingCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJacketsClothingCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass JacketsClothingCategory.JacketsClothingCategory_C");
		return ptr;
	}

}


