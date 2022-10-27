/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UPassive_OperativeDLC_4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_OperativeDLC_4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_OperativeDLC_5.Passive_OperativeDLC_4_C");
		return ptr;
	}

}


