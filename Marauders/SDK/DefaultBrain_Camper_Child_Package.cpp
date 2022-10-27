/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> PredefinedFunction UDefaultBrain_Camper_Child_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultBrain_Camper_Child_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DefaultBrain_Camper_Child.DefaultBrain_Camper_Child_C");
		return ptr;
	}

}


