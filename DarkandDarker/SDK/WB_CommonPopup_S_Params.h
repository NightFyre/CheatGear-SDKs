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
	 * Function WB_CommonPopup_S.WB_CommonPopup_S_C.Construct
	 */
	struct UWB_CommonPopup_S_C_Construct_Params
	{	};

	/**
	 * Function WB_CommonPopup_S.WB_CommonPopup_S_C.OnRemovePopup
	 */
	struct UWB_CommonPopup_S_C_OnRemovePopup_Params
	{	};

	/**
	 * Function WB_CommonPopup_S.WB_CommonPopup_S_C.OnCreatePopup
	 */
	struct UWB_CommonPopup_S_C_OnCreatePopup_Params
	{
	public:
		struct FPopupSWidgetData                                   PopupSWidgetData;                                        // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_CommonPopup_S.WB_CommonPopup_S_C.ExecuteUbergraph_WB_CommonPopup_S
	 */
	struct UWB_CommonPopup_S_C_ExecuteUbergraph_WB_CommonPopup_S_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UGLF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
