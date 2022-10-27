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
	 * 		Name   -> PredefinedFunction ULiv_Eye_ColorClothingCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiv_Eye_ColorClothingCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Liv_Eye_ColorClothingCategory.Liv_Eye_ColorClothingCategory_C");
		return ptr;
	}

}


