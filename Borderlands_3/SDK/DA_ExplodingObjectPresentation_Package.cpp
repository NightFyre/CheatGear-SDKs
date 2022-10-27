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
	 * 		Name   -> PredefinedFunction UDA_ExplodingObjectPresentation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDA_ExplodingObjectPresentation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DA_ExplodingObjectPresentation.DA_ExplodingObjectPresentation_C");
		return ptr;
	}

}


