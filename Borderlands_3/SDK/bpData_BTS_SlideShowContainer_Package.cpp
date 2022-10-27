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
	 * 		Name   -> PredefinedFunction UbpData_BTS_SlideShowContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UbpData_BTS_SlideShowContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass bpData_BTS_SlideShowContainer.bpData_BTS_SlideShowContainer_C");
		return ptr;
	}

}


