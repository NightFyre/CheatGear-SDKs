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
	 * 		Name   -> PredefinedFunction UFotF_Chapter2Complete_Entitlement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFotF_Chapter2Complete_Entitlement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FotF_Chapter2Complete_Entitlement.FotF_Chapter2Complete_Entitlement_C");
		return ptr;
	}

}


