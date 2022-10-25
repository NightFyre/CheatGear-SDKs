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
	 * 		Name   -> PredefinedFunction UPhoenixTearsPresence_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhoenixTearsPresence_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PhoenixTearsPresence.PhoenixTearsPresence_C");
		return ptr;
	}

}


