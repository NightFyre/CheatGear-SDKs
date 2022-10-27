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
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.SavePrompt
	 */
	struct UWBP_CharacterEditor_C_SavePrompt_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.SaveKit
	 */
	struct UWBP_CharacterEditor_C_SaveKit_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.CheckFirearmAmmunition
	 */
	struct UWBP_CharacterEditor_C_CheckFirearmAmmunition_Params
	{
	public:
		TArray<class FText>                                        OutFirearmsMissingAmmunition;                            // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.GetApplyEnabled
	 */
	struct UWBP_CharacterEditor_C_GetApplyEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.GenerateJsonObj
	 */
	struct UWBP_CharacterEditor_C_GenerateJsonObj_Params
	{
	public:
		class UVaRestJsonObject*                                   OutJsonObj;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.ZoomCamera
	 */
	struct UWBP_CharacterEditor_C_ZoomCamera_Params
	{
	public:
		float                                                      WheelDelta;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.OnMouseWheel
	 */
	struct UWBP_CharacterEditor_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.RotateCharacter
	 */
	struct UWBP_CharacterEditor_C_RotateCharacter_Params
	{
	public:
		struct FVector2D                                           MouseDelta;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.MoveCamera
	 */
	struct UWBP_CharacterEditor_C_MoveCamera_Params
	{
	public:
		struct FVector2D                                           MouseDelta;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.GetUnavailableToolTipWidget
	 */
	struct UWBP_CharacterEditor_C_GetUnavailableToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.OnMouseMove
	 */
	struct UWBP_CharacterEditor_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.OnMenuAnchorKitGetMenuContent
	 */
	struct UWBP_CharacterEditor_C_OnMenuAnchorKitGetMenuContent_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_CharacterEditor_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.Construct
	 */
	struct UWBP_CharacterEditor_C_Construct_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.HideRightSelectionArea
	 */
	struct UWBP_CharacterEditor_C_HideRightSelectionArea_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__EditableTextBox_Name_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UWBP_CharacterEditor_C_BndEvt__EditableTextBox_Name_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.SetupPlayerName
	 */
	struct UWBP_CharacterEditor_C_SetupPlayerName_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.CameraSetup
	 */
	struct UWBP_CharacterEditor_C_CameraSetup_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.SetupCharacter
	 */
	struct UWBP_CharacterEditor_C_SetupCharacter_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.ShowRightSelectionArea
	 */
	struct UWBP_CharacterEditor_C_ShowRightSelectionArea_Params
	{
	public:
		class FText                                                SelectionListTitle;                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bShowClear;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bShowSave;                                               // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.HideLeftSelectionArea
	 */
	struct UWBP_CharacterEditor_C_HideLeftSelectionArea_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.ShowLeftSelectionArea
	 */
	struct UWBP_CharacterEditor_C_ShowLeftSelectionArea_Params
	{
	public:
		class FText                                                SelectionListTitle;                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bShowClear;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bShowSave;                                               // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__HIDDEN_Button_Holster_K2Node_ComponentBoundEvent_3_PostClear__DelegateSignature
	 */
	struct UWBP_CharacterEditor_C_BndEvt__HIDDEN_Button_Holster_K2Node_ComponentBoundEvent_3_PostClear__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__Button_Primary_K2Node_ComponentBoundEvent_4_PostUpdate__DelegateSignature
	 */
	struct UWBP_CharacterEditor_C_BndEvt__Button_Primary_K2Node_ComponentBoundEvent_4_PostUpdate__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__Button_CancelLeftSelection_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_CharacterEditor_C_BndEvt__Button_CancelLeftSelection_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.HideLeftSelectionAreaIfVisible
	 */
	struct UWBP_CharacterEditor_C_HideLeftSelectionAreaIfVisible_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.HideRightSelectionAreaIfVisible
	 */
	struct UWBP_CharacterEditor_C_HideRightSelectionAreaIfVisible_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__Button_Ok_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_CharacterEditor_C_BndEvt__Button_Ok_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_CharacterEditor_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.Setup
	 */
	struct UWBP_CharacterEditor_C_Setup_Params
	{
	public:
		class FName                                                LoadoutName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UVaRestJsonObject*                                   JsonObj;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.SwitchBack
	 */
	struct UWBP_CharacterEditor_C_SwitchBack_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.SwitchTo
	 */
	struct UWBP_CharacterEditor_C_SwitchTo_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.Tick
	 */
	struct UWBP_CharacterEditor_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.Cancel
	 */
	struct UWBP_CharacterEditor_C_Cancel_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.CancelInternal
	 */
	struct UWBP_CharacterEditor_C_CancelInternal_Params
	{
	public:
		class UWBP_DialogueBox_C*                                  Dialogue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.UpdateSummary
	 */
	struct UWBP_CharacterEditor_C_UpdateSummary_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.InventoryItemAdded_Event_1
	 */
	struct UWBP_CharacterEditor_C_InventoryItemAdded_Event_1_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGBItem*                                             InvItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__WBP_CharacterEditor_Button_86_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharacterEditor_C_BndEvt__WBP_CharacterEditor_Button_86_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__WBP_CharacterEditor_Button_Outfit_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharacterEditor_C_BndEvt__WBP_CharacterEditor_Button_Outfit_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__WBP_CharacterEditor_Button_Operator_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharacterEditor_C_BndEvt__WBP_CharacterEditor_Button_Operator_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__WBP_CharacterEditor_Button_GearKit_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharacterEditor_C_BndEvt__WBP_CharacterEditor_Button_GearKit_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.OnKitAssetsLoaded_Event
	 */
	struct UWBP_CharacterEditor_C_OnKitAssetsLoaded_Event_Params
	{
	public:
		TArray<class UObject*>                                     LoadedAssets;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.PostSetup
	 */
	struct UWBP_CharacterEditor_C_PostSetup_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.Destruct
	 */
	struct UWBP_CharacterEditor_C_Destruct_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.InternalApply
	 */
	struct UWBP_CharacterEditor_C_InternalApply_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.OnCancelClicked_Event_1
	 */
	struct UWBP_CharacterEditor_C_OnCancelClicked_Event_1_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.Secondary_PreUpdate_Event_1
	 */
	struct UWBP_CharacterEditor_C_Secondary_PreUpdate_Event_1_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.BindSecondaryPreUpdate
	 */
	struct UWBP_CharacterEditor_C_BindSecondaryPreUpdate_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.ResetNVGTags
	 */
	struct UWBP_CharacterEditor_C_ResetNVGTags_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.SetHUDVisibillity
	 */
	struct UWBP_CharacterEditor_C_SetHUDVisibillity_Params
	{
	public:
		bool                                                       NewHidden;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__WBP_CharacterEditor_Button_Secondary_K2Node_ComponentBoundEvent_1_PostUpdate__DelegateSignature
	 */
	struct UWBP_CharacterEditor_C_BndEvt__WBP_CharacterEditor_Button_Secondary_K2Node_ComponentBoundEvent_1_PostUpdate__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.ExecuteUbergraph_WBP_CharacterEditor
	 */
	struct UWBP_CharacterEditor_C_ExecuteUbergraph_WBP_CharacterEditor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.CancelClicked__DelegateSignature
	 */
	struct UWBP_CharacterEditor_C_CancelClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharacterEditor.WBP_CharacterEditor_C.OkClicked__DelegateSignature
	 */
	struct UWBP_CharacterEditor_C_OkClicked__DelegateSignature_Params
	{
	public:
		class UVaRestJsonObject*                                   JsonObj;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
