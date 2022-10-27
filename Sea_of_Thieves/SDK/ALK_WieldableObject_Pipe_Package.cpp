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
	 * 		Name   -> PredefinedFunction UALK_WieldableObject_Pipe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALK_WieldableObject_Pipe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ALK_WieldableObject_Pipe.ALK_WieldableObject_Pipe_C");
		return ptr;
	}

}


