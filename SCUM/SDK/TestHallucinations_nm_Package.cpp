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
	 * 		Name   -> PredefinedFunction UTestHallucinations_nm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestHallucinations_nm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TestHallucinations_nm.TestHallucinations_nm_C");
		return ptr;
	}

}


