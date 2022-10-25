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
	 * 		Name   -> PredefinedFunction UAdv7_LarinnaChapter1PermEntitlement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdv7_LarinnaChapter1PermEntitlement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Adv7_LarinnaChapter1PermEntitlement.Adv7_LarinnaChapter1PermEntitlement_C");
		return ptr;
	}

}


