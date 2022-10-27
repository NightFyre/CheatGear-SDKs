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
	 * 		Name   -> PredefinedFunction UALK_FirstPerson_Female_Large_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALK_FirstPerson_Female_Large_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ALK_FirstPerson_Female_Large.ALK_FirstPerson_Female_Large_C");
		return ptr;
	}

}


