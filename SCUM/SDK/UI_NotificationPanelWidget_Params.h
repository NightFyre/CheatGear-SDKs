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
	 * Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get Money Balance Text
	 */
	struct UUI_NotificationPanelWidget_C_Get_Money_Balance_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NotificationPanel_Visibility
	 */
	struct UUI_NotificationPanelWidget_C_Get_NotificationPanel_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PATW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventCancelBox_Visibility
	 */
	struct UUI_NotificationPanelWidget_C_Get_EventCancelBox_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KUN9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventCancelTime
	 */
	struct UUI_NotificationPanelWidget_C_Get_EventCancelTime_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTime_BrushColor
	 */
	struct UUI_NotificationPanelWidget_C_Get_EventTime_BrushColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventBox_BrushColor
	 */
	struct UUI_NotificationPanelWidget_C_Get_NextEventBox_BrushColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTimeText
	 */
	struct UUI_NotificationPanelWidget_C_Get_EventTimeText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTime_Visibility
	 */
	struct UUI_NotificationPanelWidget_C_Get_EventTime_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KG9V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_RankLabel_Text
	 */
	struct UUI_NotificationPanelWidget_C_Get_RankLabel_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventLocation_Text
	 */
	struct UUI_NotificationPanelWidget_C_Get_NextEventLocation_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_FamePointsCounter_Text
	 */
	struct UUI_NotificationPanelWidget_C_Get_FamePointsCounter_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventCountdown_Text
	 */
	struct UUI_NotificationPanelWidget_C_Get_NextEventCountdown_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventBox_Visibility
	 */
	struct UUI_NotificationPanelWidget_C_Get_NextEventBox_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WLC8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ShowNotification
	 */
	struct UUI_NotificationPanelWidget_C_ShowNotification_Params
	{
	public:
		class UNotificationWidget*                                 Notification;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ClearAllNotifications
	 */
	struct UUI_NotificationPanelWidget_C_ClearAllNotifications_Params
	{	};

	/**
	 * Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ExecuteUbergraph_UI_NotificationPanelWidget
	 */
	struct UUI_NotificationPanelWidget_C_ExecuteUbergraph_UI_NotificationPanelWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PUK9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
