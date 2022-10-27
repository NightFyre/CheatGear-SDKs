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
	 * 		Name   -> PredefinedFunction UColonFull_Moderate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UColonFull_Moderate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ColonFull_Moderate.ColonFull_Moderate_C");
		return ptr;
	}

}


