/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> PredefinedFunction AContract_Hold_C2_VaultIntel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AContract_Hold_C2_VaultIntel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Contract_Hold_C2_VaultIntel.Contract_Hold_C2_VaultIntel_C");
		return ptr;
	}

}


