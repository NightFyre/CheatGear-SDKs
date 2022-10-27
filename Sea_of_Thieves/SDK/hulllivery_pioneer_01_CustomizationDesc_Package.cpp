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
	 * 		Name   -> PredefinedFunction Uhulllivery_pioneer_01_CustomizationDesc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uhulllivery_pioneer_01_CustomizationDesc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass hulllivery_pioneer_01_CustomizationDesc.hulllivery_pioneer_01_CustomizationDesc_C");
		return ptr;
	}

}


