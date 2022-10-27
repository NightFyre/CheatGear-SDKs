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
	 * 		Name   -> PredefinedFunction UDebugDescriber.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugDescriber::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InsurgencyGameplayDebugger.DebugDescriber");
		return ptr;
	}

}


