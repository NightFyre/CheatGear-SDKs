/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UALK_WieldableObject_Trident_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALK_WieldableObject_Trident_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ALK_WieldableObject_Trident.ALK_WieldableObject_Trident_C");
		return ptr;
	}

}


