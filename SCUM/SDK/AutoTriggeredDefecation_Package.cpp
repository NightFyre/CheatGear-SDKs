/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction UAutoTriggeredDefecation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoTriggeredDefecation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AutoTriggeredDefecation.AutoTriggeredDefecation_C");
		return ptr;
	}

}


