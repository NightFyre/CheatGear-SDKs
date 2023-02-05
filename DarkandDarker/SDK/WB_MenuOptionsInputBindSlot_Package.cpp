/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * 		Name   -> PredefinedFunction UWB_MenuOptionsInputBindSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_MenuOptionsInputBindSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_MenuOptionsInputBindSlot.WB_MenuOptionsInputBindSlot_C");
		return ptr;
	}

}


