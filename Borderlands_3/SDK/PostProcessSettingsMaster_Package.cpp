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
	 * 		Name   -> PredefinedFunction UPostProcessSettingsMaster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPostProcessSettingsMaster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PostProcessSettingsMaster.PostProcessSettingsMaster_C");
		return ptr;
	}

}


