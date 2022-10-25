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
	 * 		Name   -> PredefinedFunction UCaffeineOverdose_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaffeineOverdose_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CaffeineOverdose.CaffeineOverdose_C");
		return ptr;
	}

}


