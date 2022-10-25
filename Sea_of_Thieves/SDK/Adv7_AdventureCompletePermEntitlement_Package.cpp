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
	 * 		Name   -> PredefinedFunction UAdv7_AdventureCompletePermEntitlement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdv7_AdventureCompletePermEntitlement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Adv7_AdventureCompletePermEntitlement.Adv7_AdventureCompletePermEntitlement_C");
		return ptr;
	}

}


