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
	 * 		Name   -> PredefinedFunction UDefaultSeatAnimationId_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultSeatAnimationId_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DefaultSeatAnimationId.DefaultSeatAnimationId_C");
		return ptr;
	}

}


