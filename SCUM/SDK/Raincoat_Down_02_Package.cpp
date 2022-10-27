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
	 * 		Name   -> PredefinedFunction ARaincoat_Down_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaincoat_Down_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Raincoat_Down_02.Raincoat_Down_02_C");
		return ptr;
	}

}


