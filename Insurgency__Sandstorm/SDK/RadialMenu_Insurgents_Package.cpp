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
	 * 		Name   -> PredefinedFunction URadialMenu_Insurgents_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialMenu_Insurgents_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass RadialMenu_Insurgents.RadialMenu_Insurgents_C");
		return ptr;
	}

}


