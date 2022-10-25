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
	 * 		Name   -> PredefinedFunction UMarmosetMonkeyCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMarmosetMonkeyCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MarmosetMonkeyCategory.MarmosetMonkeyCategory_C");
		return ptr;
	}

}


