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
	 * 		Name   -> PredefinedFunction UDodge_Ape_Grenade_IdleL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDodge_Ape_Grenade_IdleL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dodge_Ape_Grenade_IdleL.Dodge_Ape_Grenade_IdleL_C");
		return ptr;
	}

}


