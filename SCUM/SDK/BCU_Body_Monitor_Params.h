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
	 * Function BCU_Body_Monitor.BCU_Body_Monitor_C.shouldAlarmBeOn
	 */
	struct UBCU_Body_Monitor_C_shouldAlarmBeOn_Params
	{
	public:
		bool                                                       shouldAlarmBeOn;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetContentSize
	 */
	struct UBCU_Body_Monitor_C_GetContentSize_Params
	{
	public:
		struct FVector2D                                           contentSize;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetPrisonerToMonitorOnChildren
	 */
	struct UBCU_Body_Monitor_C_SetPrisonerToMonitorOnChildren_Params
	{	};

	/**
	 * Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetSubTitles
	 */
	struct UBCU_Body_Monitor_C_SetSubTitles_Params
	{	};

	/**
	 * Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetTitleText
	 */
	struct UBCU_Body_Monitor_C_GetTitleText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetDefaultTitle
	 */
	struct UBCU_Body_Monitor_C_GetDefaultTitle_Params
	{
	public:
		class FText                                                defaultTitle;                                            // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BCU_Body_Monitor.BCU_Body_Monitor_C.SelectCustomColor
	 */
	struct UBCU_Body_Monitor_C_SelectCustomColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnMinimize
	 */
	struct UBCU_Body_Monitor_C_OnMinimize_Params
	{
	public:
		bool                                                       shouldMinimize;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BCU_Body_Monitor.BCU_Body_Monitor_C.ExecuteUbergraph_BCU_Body_Monitor
	 */
	struct UBCU_Body_Monitor_C_ExecuteUbergraph_BCU_Body_Monitor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature
	 */
	struct UBCU_Body_Monitor_C_BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
