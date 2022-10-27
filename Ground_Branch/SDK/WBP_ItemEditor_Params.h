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
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.SetupSkin
	 */
	struct UWBP_ItemEditor_C_SetupSkin_Params
	{	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.IsValidSetup
	 */
	struct UWBP_ItemEditor_C_IsValidSetup_Params
	{
	public:
		bool                                                       bOutIsValid;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QXDE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutInvalidMessage;                                       // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.GetHoveredItemTooltip
	 */
	struct UWBP_ItemEditor_C_GetHoveredItemTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.OnMouseButtonDown
	 */
	struct UWBP_ItemEditor_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.UpdateItemUnderCursor
	 */
	struct UWBP_ItemEditor_C_UpdateItemUnderCursor_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.OnDragDetected
	 */
	struct UWBP_ItemEditor_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.MakeInteractive
	 */
	struct UWBP_ItemEditor_C_MakeInteractive_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.OnMouseWheel
	 */
	struct UWBP_ItemEditor_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.OnMouseMove
	 */
	struct UWBP_ItemEditor_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.Zoom Camera
	 */
	struct UWBP_ItemEditor_C_Zoom_Camera_Params
	{
	public:
		float                                                      WheelDelta;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.RotateItemOrChar
	 */
	struct UWBP_ItemEditor_C_RotateItemOrChar_Params
	{
	public:
		struct FVector2D                                           MouseDelta;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.MoveCamera
	 */
	struct UWBP_ItemEditor_C_MoveCamera_Params
	{
	public:
		struct FVector2D                                           MouseDelta;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.Construct
	 */
	struct UWBP_ItemEditor_C_Construct_Params
	{	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.SetupFloatingItem
	 */
	struct UWBP_ItemEditor_C_SetupFloatingItem_Params
	{
	public:
		float                                                      BoundsMultiplier;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ZOffset;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PitchOffset;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      YawOffset;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bOffsetItemBy90;                                         // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.BndEvt__Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ItemEditor_C_BndEvt__Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ItemEditor_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.Close
	 */
	struct UWBP_ItemEditor_C_Close_Params
	{	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.SetupAttachedItem
	 */
	struct UWBP_ItemEditor_C_SetupAttachedItem_Params
	{
	public:
		struct FVector2D                                           AttachedItemBounds;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AttachedCameraVecOffset;                                 // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            AttachedCameraRotOffset;                                 // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.Tick
	 */
	struct UWBP_ItemEditor_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.OnOkClicked_Event_1
	 */
	struct UWBP_ItemEditor_C_OnOkClicked_Event_1_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.SaveKit
	 */
	struct UWBP_ItemEditor_C_SaveKit_Params
	{	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.OnConfirmOkClicked_Event_1
	 */
	struct UWBP_ItemEditor_C_OnConfirmOkClicked_Event_1_Params
	{
	public:
		class UWBP_DialogueBox_C*                                  Dialogue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.AddItemCustomisationWidget
	 */
	struct UWBP_ItemEditor_C_AddItemCustomisationWidget_Params
	{	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.MakeAllInteractive
	 */
	struct UWBP_ItemEditor_C_MakeAllInteractive_Params
	{	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.LoadDraggedItemIcon
	 */
	struct UWBP_ItemEditor_C_LoadDraggedItemIcon_Params
	{
	public:
		class UWBP_DragItem_Visual_C*                              DragItemVisual;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGBItem*                                             DraggedItem;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.DraggedItemIconLoaded_Event
	 */
	struct UWBP_ItemEditor_C_DraggedItemIconLoaded_Event_Params
	{
	public:
		class UObject*                                             LoadedAsset;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.Cancel
	 */
	struct UWBP_ItemEditor_C_Cancel_Params
	{	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.SavePrompt
	 */
	struct UWBP_ItemEditor_C_SavePrompt_Params
	{	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.OnCancelClicked_Event_1
	 */
	struct UWBP_ItemEditor_C_OnCancelClicked_Event_1_Params
	{	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.MoveArmsOutOfWay
	 */
	struct UWBP_ItemEditor_C_MoveArmsOutOfWay_Params
	{	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.OnKitAssetsLoaded_Event
	 */
	struct UWBP_ItemEditor_C_OnKitAssetsLoaded_Event_Params
	{
	public:
		TArray<class UObject*>                                     LoadedAssets;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.Destruct
	 */
	struct UWBP_ItemEditor_C_Destruct_Params
	{	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.BndEvt__WBP_ItemEditor_Button_Clear_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ItemEditor_C_BndEvt__WBP_ItemEditor_Button_Clear_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.OnOkClicked_Event_2
	 */
	struct UWBP_ItemEditor_C_OnOkClicked_Event_2_Params
	{
	public:
		class UWBP_DialogueBox_C*                                  Dialogue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.ExecuteUbergraph_WBP_ItemEditor
	 */
	struct UWBP_ItemEditor_C_ExecuteUbergraph_WBP_ItemEditor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.OnOk__DelegateSignature
	 */
	struct UWBP_ItemEditor_C_OnOk__DelegateSignature_Params
	{
	public:
		class UVaRestJsonObject*                                   KitJsonObj;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemEditor.WBP_ItemEditor_C.OnCancel__DelegateSignature
	 */
	struct UWBP_ItemEditor_C_OnCancel__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
