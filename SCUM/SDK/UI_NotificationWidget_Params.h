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
	 * Function UI_NotificationWidget.UI_NotificationWidget_C.Initialize
	 */
	struct UUI_NotificationWidget_C_Initialize_Params
	{
	public:
		class UBasicNotificationDescription*                       desc;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NotificationWidget.UI_NotificationWidget_C.Set Notification Icon
	 */
	struct UUI_NotificationWidget_C_Set_Notification_Icon_Params
	{
	public:
		class UTexture2D*                                          IconTexture;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    IconSize;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NotificationWidget.UI_NotificationWidget_C.Set Notification Name
	 */
	struct UUI_NotificationWidget_C_Set_Notification_Name_Params
	{
	public:
		class FText                                                notificationName;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_NotificationWidget.UI_NotificationWidget_C.CheckLifespan
	 */
	struct UUI_NotificationWidget_C_CheckLifespan_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NotificationWidget.UI_NotificationWidget_C.SetLifeSpan
	 */
	struct UUI_NotificationWidget_C_SetLifeSpan_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NotificationWidget.UI_NotificationWidget_C.SetText
	 */
	struct UUI_NotificationWidget_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    InFontSize;                                              // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NotificationWidget.UI_NotificationWidget_C.UpdateScale
	 */
	struct UUI_NotificationWidget_C_UpdateScale_Params
	{	};

	/**
	 * Function UI_NotificationWidget.UI_NotificationWidget_C.Show
	 */
	struct UUI_NotificationWidget_C_Show_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_NotificationWidget.UI_NotificationWidget_C.Dismiss
	 */
	struct UUI_NotificationWidget_C_Dismiss_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_NotificationWidget.UI_NotificationWidget_C.Construct
	 */
	struct UUI_NotificationWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_NotificationWidget.UI_NotificationWidget_C.Tick
	 */
	struct UUI_NotificationWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NotificationWidget.UI_NotificationWidget_C.ExecuteUbergraph_UI_NotificationWidget
	 */
	struct UUI_NotificationWidget_C_ExecuteUbergraph_UI_NotificationWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
