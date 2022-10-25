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
	 * 		Name   -> PredefinedFunction UTest_01_UIData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTest_01_UIData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Test_01_UIData.Test_01_UIData_C");
		return ptr;
	}

}


