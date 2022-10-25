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
	 * 		Name   -> PredefinedFunction UBreathingObstructedUIData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBreathingObstructedUIData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BreathingObstructedUIData.BreathingObstructedUIData_C");
		return ptr;
	}

}


