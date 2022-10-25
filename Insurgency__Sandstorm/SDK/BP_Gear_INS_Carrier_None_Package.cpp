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
	 * 		Name   -> PredefinedFunction ABP_Gear_INS_Carrier_None_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Gear_INS_Carrier_None_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Gear_INS_Carrier_None.BP_Gear_INS_Carrier_None_C");
		return ptr;
	}

}


