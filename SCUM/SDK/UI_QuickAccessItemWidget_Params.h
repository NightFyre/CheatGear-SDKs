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
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetAdditionalIconShowAnimation
	 */
	struct UUI_QuickAccessItemWidget_C_GetAdditionalIconShowAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetLowerLeftBoxShowAnimation
	 */
	struct UUI_QuickAccessItemWidget_C_GetLowerLeftBoxShowAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetQuickAccessItemVisibility
	 */
	struct UUI_QuickAccessItemWidget_C_GetQuickAccessItemVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1V0P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetAdditionalIconFadeOutAnimation
	 */
	struct UUI_QuickAccessItemWidget_C_GetAdditionalIconFadeOutAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetAdditionalIconFadeInAnimation
	 */
	struct UUI_QuickAccessItemWidget_C_GetAdditionalIconFadeInAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetBlinkingBackgroundAnimation
	 */
	struct UUI_QuickAccessItemWidget_C_GetBlinkingBackgroundAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetLowerLeftBoxFadeOutAnimation
	 */
	struct UUI_QuickAccessItemWidget_C_GetLowerLeftBoxFadeOutAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetLowerLeftBoxFadeInAnimation
	 */
	struct UUI_QuickAccessItemWidget_C_GetLowerLeftBoxFadeInAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSize
	 */
	struct UUI_QuickAccessItemWidget_C_GetItemSize_Params
	{
	public:
		struct FVector2D                                           itemSize;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetImageBrush
	 */
	struct UUI_QuickAccessItemWidget_C_GetImageBrush_Params
	{
	public:
		struct FSlateBrush                                         imageBrush;                                              // 0x0000(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.On__imageWidget_MouseButtonDown_1
	 */
	struct UUI_QuickAccessItemWidget_C_On__imageWidget_MouseButtonDown_1_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetItemSlotNumber
	 */
	struct UUI_QuickAccessItemWidget_C_SetItemSlotNumber_Params
	{
	public:
		int32_t                                                    itemSlotNumber;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TVIL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateNormalColor
	 */
	struct UUI_QuickAccessItemWidget_C_ActivateNormalColor_Params
	{	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateAlarmColor
	 */
	struct UUI_QuickAccessItemWidget_C_ActivateAlarmColor_Params
	{	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSlotNumber
	 */
	struct UUI_QuickAccessItemWidget_C_GetItemSlotNumber_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetTextColor
	 */
	struct UUI_QuickAccessItemWidget_C_SetTextColor_Params
	{
	public:
		struct FLinearColor                                        TextColor;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.Construct
	 */
	struct UUI_QuickAccessItemWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.OnDragLeave
	 */
	struct UUI_QuickAccessItemWidget_C_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ExecuteUbergraph_UI_QuickAccessItemWidget
	 */
	struct UUI_QuickAccessItemWidget_C_ExecuteUbergraph_UI_QuickAccessItemWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YG5A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
