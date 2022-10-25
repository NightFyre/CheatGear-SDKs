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
	 * 		Name   -> PredefinedFunction USpeaking_Trumpet_ItemCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpeaking_Trumpet_ItemCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Speaking_Trumpet_ItemCategory.Speaking_Trumpet_ItemCategory_C");
		return ptr;
	}

}


