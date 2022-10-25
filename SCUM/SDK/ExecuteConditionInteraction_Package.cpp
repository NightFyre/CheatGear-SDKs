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
	 * 		Name   -> PredefinedFunction UExecuteConditionInteraction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExecuteConditionInteraction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExecuteConditionInteraction.ExecuteConditionInteraction_C");
		return ptr;
	}

}


