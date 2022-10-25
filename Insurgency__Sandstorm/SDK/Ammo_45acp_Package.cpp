/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction UAmmo_45acp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmmo_45acp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Ammo_45acp.Ammo_45acp_C");
		return ptr;
	}

}


