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
	 * 		Name   -> PredefinedFunction UOakAbility_Operative_ClassMod_Unique_04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakAbility_Operative_ClassMod_Unique_04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Operative_ClassMod_Unique_04.OakAbility_Operative_ClassMod_Unique_04_C");
		return ptr;
	}

}


