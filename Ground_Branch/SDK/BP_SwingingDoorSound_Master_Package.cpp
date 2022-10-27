/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> PredefinedFunction UBP_SwingingDoorSound_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SwingingDoorSound_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SwingingDoorSound_Master.BP_SwingingDoorSound_Master_C");
		return ptr;
	}

}


