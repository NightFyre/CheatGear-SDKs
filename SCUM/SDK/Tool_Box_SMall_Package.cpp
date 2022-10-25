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
	 * 		Name   -> PredefinedFunction ATool_Box_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATool_Box_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tool_Box_SMall.Tool_Box_Small_C");
		return ptr;
	}

}


