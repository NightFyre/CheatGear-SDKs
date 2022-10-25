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
	 * 		Name   -> PredefinedFunction UDamage_DigiClone_Melee_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamage_DigiClone_Melee_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Damage_DigiClone_Melee.Damage_DigiClone_Melee_C");
		return ptr;
	}

}


