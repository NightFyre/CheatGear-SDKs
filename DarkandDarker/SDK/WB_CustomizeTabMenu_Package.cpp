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
	 * 		Name   -> PredefinedFunction UWB_CustomizeTabMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_CustomizeTabMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_CustomizeTabMenu.WB_CustomizeTabMenu_C");
		return ptr;
	}

}


