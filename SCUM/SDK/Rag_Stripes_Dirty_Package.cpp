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
	 * 		Name   -> PredefinedFunction ARag_Stripes_Dirty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARag_Stripes_Dirty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Rag_Stripes_Dirty.Rag_Stripes_Dirty_C");
		return ptr;
	}

}


