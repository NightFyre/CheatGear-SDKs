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
	 * 		Name   -> PredefinedFunction UBP_PrisonerUIData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PrisonerUIData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PrisonerUIData.BP_PrisonerUIData_C");
		return ptr;
	}

}


