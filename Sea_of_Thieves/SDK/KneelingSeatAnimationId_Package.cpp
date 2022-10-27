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
	 * 		Name   -> PredefinedFunction UKneelingSeatAnimationId_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKneelingSeatAnimationId_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KneelingSeatAnimationId.KneelingSeatAnimationId_C");
		return ptr;
	}

}


