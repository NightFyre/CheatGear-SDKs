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
	 * 		Name   -> PredefinedFunction USetMoneyBalance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetMoneyBalance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SetMoneyBalance.SetMoneyBalance_C");
		return ptr;
	}

}


