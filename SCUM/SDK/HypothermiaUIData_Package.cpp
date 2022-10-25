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
	 * 		Name   -> PredefinedFunction UHypothermiaUIData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHypothermiaUIData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HypothermiaUIData.HypothermiaUIData_C");
		return ptr;
	}

}


