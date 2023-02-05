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
	 * 		Name   -> PredefinedFunction Uv2_WB_PlayerInventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uv2_WB_PlayerInventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass v2_WB_PlayerInventory.v2_WB_PlayerInventory_C");
		return ptr;
	}

}


