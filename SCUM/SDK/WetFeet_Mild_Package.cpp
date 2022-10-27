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
	 * 		Name   -> PredefinedFunction UWetFeet_Mild_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWetFeet_Mild_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WetFeet_Mild.WetFeet_Mild_C");
		return ptr;
	}

}


