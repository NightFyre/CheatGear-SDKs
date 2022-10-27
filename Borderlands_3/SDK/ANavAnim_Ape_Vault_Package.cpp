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
	 * 		Name   -> PredefinedFunction UANavAnim_Ape_Vault_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANavAnim_Ape_Vault_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ANavAnim_Ape_Vault.ANavAnim_Ape_Vault_C");
		return ptr;
	}

}


