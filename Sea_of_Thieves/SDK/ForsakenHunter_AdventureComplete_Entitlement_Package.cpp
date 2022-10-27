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
	 * 		Name   -> PredefinedFunction UForsakenHunter_AdventureComplete_Entitlement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForsakenHunter_AdventureComplete_Entitlement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ForsakenHunter_AdventureComplete_Entitlement.ForsakenHunter_AdventureComplete_Entitlement_C");
		return ptr;
	}

}


