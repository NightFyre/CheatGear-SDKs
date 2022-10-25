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
	 * 		Name   -> PredefinedFunction ULostSandsMerrick_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULostSandsMerrick_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LostSandsMerrick.LostSandsMerrick_C");
		return ptr;
	}

}


