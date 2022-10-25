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
	 * Function ResizableWindow.ResizableWindow_C.InitializeHUDMonitor
	 */
	struct UResizableWindow_C_InitializeHUDMonitor_Params
	{
	public:
		class FString                                              displayLabelName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       footerV2Activity;                                        // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       enableResizability;                                      // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2IPM[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                titleToSet;                                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UHUD_C*                                              parentHUDRef;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.SaveHUDLayout
	 */
	struct UResizableWindow_C_SaveHUDLayout_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.GetParentHUD
	 */
	struct UResizableWindow_C_GetParentHUD_Params
	{
	public:
		class UHUD_C*                                              parentHUD;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.SetParentHUD
	 */
	struct UResizableWindow_C_SetParentHUD_Params
	{
	public:
		class UHUD_C*                                              parentHUD;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.GetSize
	 */
	struct UResizableWindow_C_GetSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.GetPosition
	 */
	struct UResizableWindow_C_GetPosition_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.AdjustPosition
	 */
	struct UResizableWindow_C_AdjustPosition_Params
	{
	public:
		struct FVector2D                                           positionToAdjust;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGeometry                                           LocalGeometry;                                           // 0x0008(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FVector2D                                           Output;                                                  // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.MaximizeMinimizableWidgets
	 */
	struct UResizableWindow_C_MaximizeMinimizableWidgets_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.HasAnyChildren
	 */
	struct UResizableWindow_C_HasAnyChildren_Params
	{
	public:
		class UPanelWidget*                                        PanelWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F7EB[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClick
	 */
	struct UResizableWindow_C_OnHeaderDoubleClick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.SetUpResizableWindowWithChildRef
	 */
	struct UResizableWindow_C_SetUpResizableWindowWithChildRef_Params
	{
	public:
		class UWindowsContent_C*                                   contentWidgetRef;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                titleToSet;                                              // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.AdjustSizeToContent
	 */
	struct UResizableWindow_C_AdjustSizeToContent_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.SetSize
	 */
	struct UResizableWindow_C_SetSize_Params
	{
	public:
		struct FVector2D                                           newSize;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.GetContentSize
	 */
	struct UResizableWindow_C_GetContentSize_Params
	{
	public:
		struct FVector2D                                           contentSize;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.SetResizeEnableLocked
	 */
	struct UResizableWindow_C_SetResizeEnableLocked_Params
	{
	public:
		bool                                                       enableResizability;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.ActivateAlarmColor
	 */
	struct UResizableWindow_C_ActivateAlarmColor_Params
	{
	public:
		bool                                                       shouldActivateAlarmColor;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U465[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.ShowBorder
	 */
	struct UResizableWindow_C_ShowBorder_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.isResizableWindowSkills
	 */
	struct UResizableWindow_C_isResizableWindowSkills_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_393T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.GetWindowsContentWidget
	 */
	struct UResizableWindow_C_GetWindowsContentWidget_Params
	{
	public:
		class UWindowsContent_C*                                   windowsContentWidget;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.SetWindowsContentWidget
	 */
	struct UResizableWindow_C_SetWindowsContentWidget_Params
	{
	public:
		class UWindowsContent_C*                                   windowsContentWidget;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.SetFooterV2Activity
	 */
	struct UResizableWindow_C_SetFooterV2Activity_Params
	{
	public:
		bool                                                       shouldBeActive;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.ResetFlags
	 */
	struct UResizableWindow_C_ResetFlags_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.Maximize
	 */
	struct UResizableWindow_C_Maximize_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.Minimize
	 */
	struct UResizableWindow_C_Minimize_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.GetContentAreaSlotDesiredSize
	 */
	struct UResizableWindow_C_GetContentAreaSlotDesiredSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.SaveCurrentContentAreaSlotSize
	 */
	struct UResizableWindow_C_SaveCurrentContentAreaSlotSize_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.SetUpResizableWindow
	 */
	struct UResizableWindow_C_SetUpResizableWindow_Params
	{
	public:
		class UClass*                                              contentWidgetClass;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                titleToSet;                                              // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.Init
	 */
	struct UResizableWindow_C_Init_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.SetContentWidgetClass
	 */
	struct UResizableWindow_C_SetContentWidgetClass_Params
	{
	public:
		class UClass*                                              WindowsContentClass;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.AttachContentWidgetRef
	 */
	struct UResizableWindow_C_AttachContentWidgetRef_Params
	{
	public:
		class UWindowsContent_C*                                   contentWidgetRef;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.AttachContentWidget
	 */
	struct UResizableWindow_C_AttachContentWidget_Params
	{
	public:
		class UClass*                                              contentWidgetClass;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.CalculateMouseDelta
	 */
	struct UResizableWindow_C_CalculateMouseDelta_Params
	{
	public:
		struct FPointerEvent                                       LocalMouseEvent;                                         // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector2D                                           LastMousePosition;                                       // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ReturnValue;                                             // 0x0078(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.IsOffscreen
	 */
	struct UResizableWindow_C_IsOffscreen_Params
	{
	public:
		struct FPointerEvent                                       Input;                                                   // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QXOC[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.OnMouseButtonDownOnIRMinimize
	 */
	struct UResizableWindow_C_OnMouseButtonDownOnIRMinimize_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.SetResizeColorHover
	 */
	struct UResizableWindow_C_SetResizeColorHover_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.ToggleDragEnabled
	 */
	struct UResizableWindow_C_ToggleDragEnabled_Params
	{
	public:
		bool                                                       DragEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.ToggleResizeEnabled
	 */
	struct UResizableWindow_C_ToggleResizeEnabled_Params
	{
	public:
		bool                                                       ResizeEnabled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.DetermineNewSize
	 */
	struct UResizableWindow_C_DetermineNewSize_Params
	{
	public:
		struct FVector2D                                           Original;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Delta;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           New;                                                     // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.MouseButtonUpEvent
	 */
	struct UResizableWindow_C_MouseButtonUpEvent_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.ResetVariablesToDefault
	 */
	struct UResizableWindow_C_ResetVariablesToDefault_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.OnResizeAreaMouseButtonDown
	 */
	struct UResizableWindow_C_OnResizeAreaMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.OnHeaderMouseButtonDown
	 */
	struct UResizableWindow_C_OnHeaderMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.OnMouseMove
	 */
	struct UResizableWindow_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.OnMouseButtonUp
	 */
	struct UResizableWindow_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.Tick
	 */
	struct UResizableWindow_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.Event RDA Monitor Size Changed
	 */
	struct UResizableWindow_C_Event_RDA_Monitor_Size_Changed_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.AlarmOnWindowContent
	 */
	struct UResizableWindow_C_AlarmOnWindowContent_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.AlarmOffWindowContent
	 */
	struct UResizableWindow_C_AlarmOffWindowContent_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickEvent
	 */
	struct UResizableWindow_C_OnHeaderDoubleClickEvent_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.OnMaximized
	 */
	struct UResizableWindow_C_OnMaximized_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.SaveLayout
	 */
	struct UResizableWindow_C_SaveLayout_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.LoadLayout
	 */
	struct UResizableWindow_C_LoadLayout_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.ResetLayout
	 */
	struct UResizableWindow_C_ResetLayout_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature
	 */
	struct UResizableWindow_C_BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature
	 */
	struct UResizableWindow_C_BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.OnMouseLeave
	 */
	struct UResizableWindow_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.Construct
	 */
	struct UResizableWindow_C_Construct_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.SetTitle
	 */
	struct UResizableWindow_C_SetTitle_Params
	{
	public:
		class FText                                                titleToSet;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.ExecuteUbergraph_ResizableWindow
	 */
	struct UResizableWindow_C_ExecuteUbergraph_ResizableWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LPFW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickDispatcher__DelegateSignature
	 */
	struct UResizableWindow_C_OnHeaderDoubleClickDispatcher__DelegateSignature_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.ContentMaximizedEventDispatcher__DelegateSignature
	 */
	struct UResizableWindow_C_ContentMaximizedEventDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function ResizableWindow.ResizableWindow_C.ContentSizeChangedEventDispatcher__DelegateSignature
	 */
	struct UResizableWindow_C_ContentSizeChangedEventDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
