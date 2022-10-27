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
	 * 		Name   -> PredefinedFunction UNeedToDefecate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNeedToDefecate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NeedToDefecate.NeedToDefecate_C");
		return ptr;
	}

}


