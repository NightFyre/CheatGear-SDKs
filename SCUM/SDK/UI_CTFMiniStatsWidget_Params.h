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
	 * Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.GetColor
	 */
	struct UUI_CTFMiniStatsWidget_C_GetColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.UpdateStats
	 */
	struct UUI_CTFMiniStatsWidget_C_UpdateStats_Params
	{	};

	/**
	 * Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.FillLabels
	 */
	struct UUI_CTFMiniStatsWidget_C_FillLabels_Params
	{	};

	/**
	 * Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.ExecuteUbergraph_UI_CTFMiniStatsWidget
	 */
	struct UUI_CTFMiniStatsWidget_C_ExecuteUbergraph_UI_CTFMiniStatsWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
