﻿/**
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
	 * 		Name   -> PredefinedFunction UWB_CustomizeCharacterSkinList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_CustomizeCharacterSkinList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_CustomizeCharacterSkinList.WB_CustomizeCharacterSkinList_C");
		return ptr;
	}

}

