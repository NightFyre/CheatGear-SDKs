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
	 * 		Name   -> PredefinedFunction ULiv_FrecklesClothingCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiv_FrecklesClothingCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Liv_FrecklesClothingCategory.Liv_FrecklesClothingCategory_C");
		return ptr;
	}

}


