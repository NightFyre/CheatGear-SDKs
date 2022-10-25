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
	 * Function MinimizableWidget.MinimizableWidget_C.OnMouseDoubleClick_1
	 */
	struct UMinimizableWidget_C_OnMouseDoubleClick_1_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.SetMinimizableWidgetSize
	 */
	struct UMinimizableWidget_C_SetMinimizableWidgetSize_Params
	{
	public:
		struct FVector2D                                           newMinWidgetSize;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.GetMinimizableWidgetSize
	 */
	struct UMinimizableWidget_C_GetMinimizableWidgetSize_Params
	{
	public:
		struct FVector2D                                           widgetSize;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.SetAlarmColor
	 */
	struct UMinimizableWidget_C_SetAlarmColor_Params
	{
	public:
		bool                                                       shouldSetAlarmColorOn;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JX3S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.SetInitialIconsVisibility
	 */
	struct UMinimizableWidget_C_SetInitialIconsVisibility_Params
	{	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.Minimize
	 */
	struct UMinimizableWidget_C_Minimize_Params
	{	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.Maximize
	 */
	struct UMinimizableWidget_C_Maximize_Params
	{	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.OnMaximizeImageMouseButtonDown
	 */
	struct UMinimizableWidget_C_OnMaximizeImageMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.OnMinimizeImageMouseButtonDown
	 */
	struct UMinimizableWidget_C_OnMinimizeImageMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOff
	 */
	struct UMinimizableWidget_C_AlarmSwitchOff_Params
	{	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOn
	 */
	struct UMinimizableWidget_C_AlarmSwitchOn_Params
	{	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.Event Widget Size Changed
	 */
	struct UMinimizableWidget_C_Event_Widget_Size_Changed_Params
	{	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.Tick
	 */
	struct UMinimizableWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.Event Widget Maximized
	 */
	struct UMinimizableWidget_C_Event_Widget_Maximized_Params
	{	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.Construct
	 */
	struct UMinimizableWidget_C_Construct_Params
	{	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.Event Widget Minimized
	 */
	struct UMinimizableWidget_C_Event_Widget_Minimized_Params
	{	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.OnMinimize
	 */
	struct UMinimizableWidget_C_OnMinimize_Params
	{
	public:
		bool                                                       shouldMinimize;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.WindowContentSizeChanged
	 */
	struct UMinimizableWidget_C_WindowContentSizeChanged_Params
	{	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.AlarmOnWindowContent
	 */
	struct UMinimizableWidget_C_AlarmOnWindowContent_Params
	{	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.AlarmOffWindowContent
	 */
	struct UMinimizableWidget_C_AlarmOffWindowContent_Params
	{	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.ExecuteUbergraph_MinimizableWidget
	 */
	struct UMinimizableWidget_C_ExecuteUbergraph_MinimizableWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature
	 */
	struct UMinimizableWidget_C_NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature
	 */
	struct UMinimizableWidget_C_NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature
	 */
	struct UMinimizableWidget_C_NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function MinimizableWidget.MinimizableWidget_C.WidgetSizeChangedEventDispatcher__DelegateSignature
	 */
	struct UMinimizableWidget_C_WidgetSizeChangedEventDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
