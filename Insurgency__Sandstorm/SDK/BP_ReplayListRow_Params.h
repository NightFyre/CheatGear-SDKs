#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.SetDateAndDurationText
	 */
	struct UBP_ReplayListRow_C_SetDateAndDurationText_Params
	{	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.SetReplayMapAndScenarioText
	 */
	struct UBP_ReplayListRow_C_SetReplayMapAndScenarioText_Params
	{	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.Get_Border_0_Background_1
	 */
	struct UBP_ReplayListRow_C_Get_Border_0_Background_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.OnFocusReceived
	 */
	struct UBP_ReplayListRow_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.Get_ViewersText_Text_1
	 */
	struct UBP_ReplayListRow_C_Get_ViewersText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.Get_ViewersBox_Visibility_1
	 */
	struct UBP_ReplayListRow_C_Get_ViewersBox_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.GetReplayTooltipText
	 */
	struct UBP_ReplayListRow_C_GetReplayTooltipText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.BindGetDatetimeString
	 */
	struct UBP_ReplayListRow_C_BindGetDatetimeString_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.BindGetDurationTextVisibility
	 */
	struct UBP_ReplayListRow_C_BindGetDurationTextVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.GetDurationText
	 */
	struct UBP_ReplayListRow_C_GetDurationText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.Construct
	 */
	struct UBP_ReplayListRow_C_Construct_Params
	{	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.OnAddedToFocusPath
	 */
	struct UBP_ReplayListRow_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.OnRemovedFromFocusPath
	 */
	struct UBP_ReplayListRow_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.BndEvt__CopyIdButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ReplayListRow_C_BndEvt__CopyIdButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.BndEvt__WatchButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ReplayListRow_C_BndEvt__WatchButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.BndEvt__CopyIdButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_ReplayListRow_C_BndEvt__CopyIdButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.BndEvt__CopyIdButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_ReplayListRow_C_BndEvt__CopyIdButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.BndEvt__WatchButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_ReplayListRow_C_BndEvt__WatchButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.BndEvt__WatchButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_ReplayListRow_C_BndEvt__WatchButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.OnMouseEnter
	 */
	struct UBP_ReplayListRow_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.OnMouseLeave
	 */
	struct UBP_ReplayListRow_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.BndEvt__TrashButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ReplayListRow_C_BndEvt__TrashButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.ExecuteUbergraph_BP_ReplayListRow
	 */
	struct UBP_ReplayListRow_C_ExecuteUbergraph_BP_ReplayListRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.OnSendToTrash__DelegateSignature
	 */
	struct UBP_ReplayListRow_C_OnSendToTrash__DelegateSignature_Params
	{
	public:
		class UBP_ReplayListRow_C*                                 ReplayListRow;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReplayListRow.BP_ReplayListRow_C.OnTravelTo__DelegateSignature
	 */
	struct UBP_ReplayListRow_C_OnTravelTo__DelegateSignature_Params
	{
	public:
		struct FReplayBrowserInfo                                  ReplayInfo;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
