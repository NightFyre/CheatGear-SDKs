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
	 * 		Name   -> PredefinedFunction ABaseball_Cap_16_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseball_Cap_16_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Baseball_Cap_17.Baseball_Cap_16_C");
		return ptr;
	}

}


