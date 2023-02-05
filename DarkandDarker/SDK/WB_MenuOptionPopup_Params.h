#pragma once

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
	 * Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.RefreshDetailText
	 */
	struct UWB_MenuOptionPopup_C_RefreshDetailText_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3WI4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.UpdateDetailText
	 */
	struct UWB_MenuOptionPopup_C_UpdateDetailText_Params
	{
	public:
		class FText                                                InDetailText;                                            // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.UpdateButtonText
	 */
	struct UWB_MenuOptionPopup_C_UpdateButtonText_Params
	{
	public:
		class FText                                                InLeftText;                                              // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                InRightText;                                             // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.ExecuteUbergraph_WB_MenuOptionPopup
	 */
	struct UWB_MenuOptionPopup_C_ExecuteUbergraph_WB_MenuOptionPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DMUE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
