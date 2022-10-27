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
	 * 		Name   -> PredefinedFunction UHatsClothingCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHatsClothingCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HatsClothingCategory.HatsClothingCategory_C");
		return ptr;
	}

}


