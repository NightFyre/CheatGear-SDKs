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
	 * Function RDAMonitor.RDAMonitor_C.shouldAlarmBeOn
	 */
	struct URDAMonitor_C_shouldAlarmBeOn_Params
	{
	public:
		bool                                                       shouldAlarmBeOn;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RDAMonitor.RDAMonitor_C.GetContentSize
	 */
	struct URDAMonitor_C_GetContentSize_Params
	{
	public:
		struct FVector2D                                           contentSize;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RDAMonitor.RDAMonitor_C.SetPrisonerToMonitorOnChildren
	 */
	struct URDAMonitor_C_SetPrisonerToMonitorOnChildren_Params
	{	};

	/**
	 * Function RDAMonitor.RDAMonitor_C.Init
	 */
	struct URDAMonitor_C_Init_Params
	{	};

	/**
	 * Function RDAMonitor.RDAMonitor_C.GetTitleText
	 */
	struct URDAMonitor_C_GetTitleText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function RDAMonitor.RDAMonitor_C.GetDefaultTitle
	 */
	struct URDAMonitor_C_GetDefaultTitle_Params
	{
	public:
		class FText                                                defaultTitle;                                            // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function RDAMonitor.RDAMonitor_C.SelectCustomColor
	 */
	struct URDAMonitor_C_SelectCustomColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RDAMonitor.RDAMonitor_C.OnMinimize
	 */
	struct URDAMonitor_C_OnMinimize_Params
	{
	public:
		bool                                                       shouldMinimize;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RDAMonitor.RDAMonitor_C.Construct
	 */
	struct URDAMonitor_C_Construct_Params
	{	};

	/**
	 * Function RDAMonitor.RDAMonitor_C.Tick
	 */
	struct URDAMonitor_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RDAMonitor.RDAMonitor_C.MinimizableWidgetSizeChanged
	 */
	struct URDAMonitor_C_MinimizableWidgetSizeChanged_Params
	{	};

	/**
	 * Function RDAMonitor.RDAMonitor_C.RDAMonitorSizeChanged
	 */
	struct URDAMonitor_C_RDAMonitorSizeChanged_Params
	{	};

	/**
	 * Function RDAMonitor.RDAMonitor_C.OnPrisonerSet
	 */
	struct URDAMonitor_C_OnPrisonerSet_Params
	{	};

	/**
	 * Function RDAMonitor.RDAMonitor_C.OnRDAMonitorContentSizeChanged
	 */
	struct URDAMonitor_C_OnRDAMonitorContentSizeChanged_Params
	{	};

	/**
	 * Function RDAMonitor.RDAMonitor_C.WindowContentSizeChanged
	 */
	struct URDAMonitor_C_WindowContentSizeChanged_Params
	{	};

	/**
	 * Function RDAMonitor.RDAMonitor_C.ExecuteUbergraph_RDAMonitor
	 */
	struct URDAMonitor_C_ExecuteUbergraph_RDAMonitor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RDAMonitor.RDAMonitor_C.RDASizeChangeEventDispatcher__DelegateSignature
	 */
	struct URDAMonitor_C_RDASizeChangeEventDispatcher__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           newSize;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
