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
	 * 		Name   -> PredefinedFunction UAutoTriggeredUrination_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoTriggeredUrination_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AutoTriggeredUrination.AutoTriggeredUrination_C");
		return ptr;
	}

}


