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
	 * 		Name   -> PredefinedFunction ABP_FireSupport_Mortar_Chemical_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FireSupport_Mortar_Chemical_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_FireSupport_Mortar_Chemical.BP_FireSupport_Mortar_Chemical_C");
		return ptr;
	}

}


