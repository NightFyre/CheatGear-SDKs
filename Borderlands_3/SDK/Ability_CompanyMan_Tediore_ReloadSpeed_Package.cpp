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
	 * 		Name   -> PredefinedFunction UAbility_CompanyMan_Tediore_ReloadSpeed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_CompanyMan_Tediore_ReloadSpeed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_CompanyMan_Tediore_ReloadSpeed.Ability_CompanyMan_Tediore_ReloadSpeed_C");
		return ptr;
	}

}


