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
	 * 		Name   -> PredefinedFunction UAbility_CompanyMan_Dahl_Accuracy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_CompanyMan_Dahl_Accuracy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_CompanyMan_Dahl_Accuracy.Ability_CompanyMan_Dahl_Accuracy_C");
		return ptr;
	}

}


