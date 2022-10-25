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
	 * 		Name   -> PredefinedFunction ABP_Prop_Paintings_01c_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Prop_Paintings_01c_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Prop_Paintings_01c.BP_Prop_Paintings_01c_C");
		return ptr;
	}

}


