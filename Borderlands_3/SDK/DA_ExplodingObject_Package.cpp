/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UDA_ExplodingObject_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDA_ExplodingObject_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DA_ExplodingObject.DA_ExplodingObject_C");
		return ptr;
	}

}


