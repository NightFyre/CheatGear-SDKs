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
	 * 		Name   -> PredefinedFunction UTitle_EmissaryOfGoldMarauders_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitle_EmissaryOfGoldMarauders_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Title_EmissaryOfGoldMarauders.Title_EmissaryOfGoldMarauders_C");
		return ptr;
	}

}


