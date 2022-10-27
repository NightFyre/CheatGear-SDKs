/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> PredefinedFunction ASIGIS_Container_Common_Ammo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGIS_Container_Common_Ammo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SIGIS_Container_Common_Ammo.SIGIS_Container_Common_Ammo_C");
		return ptr;
	}

}


