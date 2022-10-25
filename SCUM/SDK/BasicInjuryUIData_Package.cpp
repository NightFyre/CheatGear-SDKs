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
	 * 		Name   -> PredefinedFunction UBasicInjuryUIData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasicInjuryUIData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BasicInjuryUIData.BasicInjuryUIData_C");
		return ptr;
	}

}


