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
	 * 		Name   -> PredefinedFunction UWB_UnEquipSpellTierListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_UnEquipSpellTierListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_UnEquipSpellTierListItem.WB_UnEquipSpellTierListItem_C");
		return ptr;
	}

}

