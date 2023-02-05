﻿#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WB_CustomizeCharacterSkinListEntry.WB_CustomizeCharacterSkinListEntry_C.Get_Image_FrameEquipped_Visibility
	 */
	struct UWB_CustomizeCharacterSkinListEntry_C_Get_Image_FrameEquipped_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_CustomizeCharacterSkinListEntry.WB_CustomizeCharacterSkinListEntry_C.Get_Image_Hover_Visibility
	 */
	struct UWB_CustomizeCharacterSkinListEntry_C_Get_Image_Hover_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif