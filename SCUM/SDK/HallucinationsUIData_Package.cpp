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
	 * 		Name   -> PredefinedFunction UHallucinationsUIData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHallucinationsUIData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HallucinationsUIData.HallucinationsUIData_C");
		return ptr;
	}

}


