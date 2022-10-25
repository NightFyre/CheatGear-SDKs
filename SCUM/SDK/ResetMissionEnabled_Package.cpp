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
	 * 		Name   -> PredefinedFunction UResetMissionEnabled_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResetMissionEnabled_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ResetMissionEnabled.ResetMissionEnabled_C");
		return ptr;
	}

}


