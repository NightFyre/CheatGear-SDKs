#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_UserMenuManager.WBP_UserMenuManager_C.Open
	 */
	struct UWBP_UserMenuManager_C_Open_Params
	{
	public:
		class FString                                              MenuName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                MenuType;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_UserMenuManager.WBP_UserMenuManager_C.BuildMenu
	 */
	struct UWBP_UserMenuManager_C_BuildMenu_Params
	{
	public:
		struct FFUserMenuData                                      UserMenu;                                                // 0x0000(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_UserMenuManager.WBP_UserMenuManager_C.BuildLinearMenu
	 */
	struct UWBP_UserMenuManager_C_BuildLinearMenu_Params
	{
	public:
		struct FFUserMenuData                                      UserMenu;                                                // 0x0000(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_UserMenuManager.WBP_UserMenuManager_C.OnSelected_Event_1
	 */
	struct UWBP_UserMenuManager_C_OnSelected_Event_1_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_UserMenuManager.WBP_UserMenuManager_C.BuildRadialMenu
	 */
	struct UWBP_UserMenuManager_C_BuildRadialMenu_Params
	{
	public:
		struct FFUserMenuData                                      UserMenu;                                                // 0x0000(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_UserMenuManager.WBP_UserMenuManager_C.OnSelected_Event
	 */
	struct UWBP_UserMenuManager_C_OnSelected_Event_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_UserMenuManager.WBP_UserMenuManager_C.ForceClosed
	 */
	struct UWBP_UserMenuManager_C_ForceClosed_Params
	{	};

	/**
	 * Function WBP_UserMenuManager.WBP_UserMenuManager_C.ExecuteUbergraph_WBP_UserMenuManager
	 */
	struct UWBP_UserMenuManager_C_ExecuteUbergraph_WBP_UserMenuManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZVKP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
