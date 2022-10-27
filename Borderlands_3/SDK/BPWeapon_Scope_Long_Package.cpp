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
	 * 		Name   -> PredefinedFunction UBPWeapon_Scope_Long_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeapon_Scope_Long_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeapon_Scope_Long.BPWeapon_Scope_Long_C");
		return ptr;
	}

}


