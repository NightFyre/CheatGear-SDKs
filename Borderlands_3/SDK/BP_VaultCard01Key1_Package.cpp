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
	 * 		Name   -> PredefinedFunction ABP_VaultCard01Key1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VaultCard01Key1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VaultCard01Key1.BP_VaultCard01Key1_C");
		return ptr;
	}

}


