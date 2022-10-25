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
	 * Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.GetThrowingAccessItemVisibility
	 */
	struct UUI_ThrowingAccessItemWidget_C_GetThrowingAccessItemVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8J0U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.GetItemSize
	 */
	struct UUI_ThrowingAccessItemWidget_C_GetItemSize_Params
	{
	public:
		struct FVector2D                                           itemSize;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.GetImageBrush
	 */
	struct UUI_ThrowingAccessItemWidget_C_GetImageBrush_Params
	{
	public:
		struct FSlateBrush                                         imageBrush;                                              // 0x0000(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.On__imageWidget_MouseButtonDown_1
	 */
	struct UUI_ThrowingAccessItemWidget_C_On__imageWidget_MouseButtonDown_1_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.SetItemSlotNumber
	 */
	struct UUI_ThrowingAccessItemWidget_C_SetItemSlotNumber_Params
	{
	public:
		int32_t                                                    itemSlotNumber;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2YBF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.ActivateNormalColor
	 */
	struct UUI_ThrowingAccessItemWidget_C_ActivateNormalColor_Params
	{	};

	/**
	 * Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.ActivateAlarmColor
	 */
	struct UUI_ThrowingAccessItemWidget_C_ActivateAlarmColor_Params
	{	};

	/**
	 * Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.GetItemSlotNumber
	 */
	struct UUI_ThrowingAccessItemWidget_C_GetItemSlotNumber_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.SetTextColor
	 */
	struct UUI_ThrowingAccessItemWidget_C_SetTextColor_Params
	{
	public:
		struct FLinearColor                                        TextColor;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.Construct
	 */
	struct UUI_ThrowingAccessItemWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.OnDragLeave
	 */
	struct UUI_ThrowingAccessItemWidget_C_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.ExecuteUbergraph_UI_ThrowingAccessItemWidget
	 */
	struct UUI_ThrowingAccessItemWidget_C_ExecuteUbergraph_UI_ThrowingAccessItemWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K1PZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
