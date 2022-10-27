#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.GetVisibility_2
	 */
	struct UWBP_Spectator_Overlay_C_GetVisibility_2_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.Get_Button_Admin_Visibility_1
	 */
	struct UWBP_Spectator_Overlay_C_Get_Button_Admin_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.Get_VerticalBox_Player_Visibility_1
	 */
	struct UWBP_Spectator_Overlay_C_Get_VerticalBox_Player_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.GetVisibility_1
	 */
	struct UWBP_Spectator_Overlay_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.GetMapListOptionsVis
	 */
	struct UWBP_Spectator_Overlay_C_GetMapListOptionsVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.GeneratePlayerList
	 */
	struct UWBP_Spectator_Overlay_C_GeneratePlayerList_Params
	{	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.GetOptionsVis
	 */
	struct UWBP_Spectator_Overlay_C_GetOptionsVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.OnGetMinimapStyleList
	 */
	struct UWBP_Spectator_Overlay_C_OnGetMinimapStyleList_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.OnMouseMove
	 */
	struct UWBP_Spectator_Overlay_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.GetQuickOptionsVis
	 */
	struct UWBP_Spectator_Overlay_C_GetQuickOptionsVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.OnGetCamerList
	 */
	struct UWBP_Spectator_Overlay_C_OnGetCamerList_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.GetPromptVis
	 */
	struct UWBP_Spectator_Overlay_C_GetPromptVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.OnMouseButtonUp
	 */
	struct UWBP_Spectator_Overlay_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.OnMouseButtonDown
	 */
	struct UWBP_Spectator_Overlay_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.OnKeyUp
	 */
	struct UWBP_Spectator_Overlay_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.OnKeyDown
	 */
	struct UWBP_Spectator_Overlay_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.Construct
	 */
	struct UWBP_Spectator_Overlay_C_Construct_Params
	{	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.OnSpectatorShowOptionsMenu_Event_1
	 */
	struct UWBP_Spectator_Overlay_C_OnSpectatorShowOptionsMenu_Event_1_Params
	{	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.BindPlayerSpectatorEvents
	 */
	struct UWBP_Spectator_Overlay_C_BindPlayerSpectatorEvents_Params
	{	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Spectator_Overlay_C_BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Spectator_Overlay_C_BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.AdjustZoom
	 */
	struct UWBP_Spectator_Overlay_C_AdjustZoom_Params
	{
	public:
		float                                                      Adjust;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.Hide
	 */
	struct UWBP_Spectator_Overlay_C_Hide_Params
	{	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.BndEvt__Button_Camera_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Spectator_Overlay_C_BndEvt__Button_Camera_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.BndEvt__Button_Prev_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Spectator_Overlay_C_BndEvt__Button_Prev_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Spectator_Overlay_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.BndEvt__Button_MinimapStyle_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Spectator_Overlay_C_BndEvt__Button_MinimapStyle_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.BindMinimapStyleList
	 */
	struct UWBP_Spectator_Overlay_C_BindMinimapStyleList_Params
	{
	public:
		class UWBP_SpectatorMinimapStyleLlist_C*                   MinimapStyleList;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.OnMinimapStyleChanged_Event_1
	 */
	struct UWBP_Spectator_Overlay_C_OnMinimapStyleChanged_Event_1_Params
	{
	public:
		class FName                                                MinimapStyle;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.MinimapStyleUpdated
	 */
	struct UWBP_Spectator_Overlay_C_MinimapStyleUpdated_Params
	{	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.ForceClose
	 */
	struct UWBP_Spectator_Overlay_C_ForceClose_Params
	{	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.PopulateOptions
	 */
	struct UWBP_Spectator_Overlay_C_PopulateOptions_Params
	{	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.Tick
	 */
	struct UWBP_Spectator_Overlay_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Spectator_Overlay_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.BndEvt__Button_Admin_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Spectator_Overlay_C_BndEvt__Button_Admin_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.OnSpectatorViewTargetChanged_Event_1
	 */
	struct UWBP_Spectator_Overlay_C_OnSpectatorViewTargetChanged_Event_1_Params
	{
	public:
		class AActor*                                              NewViewTarget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.ExecuteUbergraph_WBP_Spectator_Overlay
	 */
	struct UWBP_Spectator_Overlay_C_ExecuteUbergraph_WBP_Spectator_Overlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Spectator_Overlay.WBP_Spectator_Overlay_C.OnUpdate__DelegateSignature
	 */
	struct UWBP_Spectator_Overlay_C_OnUpdate__DelegateSignature_Params
	{
	public:
		class UWBP_Spectator_Overlay_C*                            SpectatorOverlay;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
