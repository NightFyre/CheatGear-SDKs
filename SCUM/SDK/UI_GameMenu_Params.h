#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_GameMenu.UI_GameMenu_C.GetText_1
	 */
	struct UUI_GameMenu_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GameMenu.UI_GameMenu_C.Get Visibility 0
	 */
	struct UUI_GameMenu_C_Get_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameMenu.UI_GameMenu_C.Get_CommitSuicide_bIsEnabled_1
	 */
	struct UUI_GameMenu_C_Get_CommitSuicide_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7M7G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_GameMenu.UI_GameMenu_C.Get_CommitSuicide_Visibility
	 */
	struct UUI_GameMenu_C_Get_CommitSuicide_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameMenu.UI_GameMenu_C.SaveHUDLayout
	 */
	struct UUI_GameMenu_C_SaveHUDLayout_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
