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
	 * 		Name   -> PredefinedFunction UAdv7_Chapter2PermEntitlement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdv7_Chapter2PermEntitlement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Adv7_Chapter2PermEntitlement.Adv7_Chapter2PermEntitlement_C");
		return ptr;
	}

}


