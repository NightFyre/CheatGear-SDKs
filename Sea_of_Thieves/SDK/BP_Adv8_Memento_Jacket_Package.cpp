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
	 * 		Name   -> PredefinedFunction UBP_Adv8_Memento_Jacket_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Adv8_Memento_Jacket_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Adv8_Memento_Jacket.BP_Adv8_Memento_Jacket_C");
		return ptr;
	}

}


