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
	 * 		Name   -> PredefinedFunction AWeaponScope_Dragunov_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeaponScope_Dragunov_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponScope_Dragunov.WeaponScope_Dragunov_C");
		return ptr;
	}

}


