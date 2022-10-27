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
	 * 		Name   -> PredefinedFunction URadialMenu_Security_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialMenu_Security_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass RadialMenu_Security.RadialMenu_Security_C");
		return ptr;
	}

}


