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
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnKeyDown
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnFocusReceived
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_selectedmarker_Visibility_1
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_Get_selectedmarker_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnHoverChanged
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_OnHoverChanged_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_EditButton_Visibility_1
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_Get_EditButton_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.SetEditing
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_SetEditing_Params
	{
	public:
		bool                                                       IsEditing;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZKYK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_RemoveButton_Visibility_2
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_Get_RemoveButton_Visibility_2_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_SaveButton_Visibility_1
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_Get_SaveButton_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_RemoveButton_Visibility_1
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_Get_RemoveButton_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_EditableButtonTextBox_Visibility_1
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_Get_EditableButtonTextBox_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_PresetButton_Visibility_1
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_Get_PresetButton_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.GetVisibility_1
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_SaveIconImage_Visibility_1
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_Get_SaveIconImage_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Get_EditIcon_Visibility_1
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_Get_EditIcon_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.VisibleIfNotEditing
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_VisibleIfNotEditing_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.VisibleIfEditing
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_VisibleIfEditing_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.GetBackground_1
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_GetBackground_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.GetBackgroundColor
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_GetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.SetSelected
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_SetSelected_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.GetRedBorderVisibility
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_GetRedBorderVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.GetTextColor
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.Construct
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_Construct_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_308_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_BndEvt__PresetButton_K2Node_ComponentBoundEvent_308_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_BndEvt__PresetButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_457_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_457_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnMouseEnter
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_BndEvt__PresetButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_BndEvt__PresetButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnFocusLost
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.ExecuteUbergraph_BP_InGameMenu_CosmeticPresetButton
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_ExecuteUbergraph_BP_InGameMenu_CosmeticPresetButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8QNA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnAddNewButtonClicked__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_OnAddNewButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnDefaultButtonClicked__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_OnDefaultButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnCancelButtonClicked__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_OnCancelButtonClicked__DelegateSignature_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnRemoveButtonClicked__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_OnRemoveButtonClicked__DelegateSignature_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnEditButtonClicked__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_OnEditButtonClicked__DelegateSignature_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnSaveButtonClicked__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_OnSaveButtonClicked__DelegateSignature_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                PresetDesignation;                                       // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnPresetClicked__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_OnPresetClicked__DelegateSignature_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnUnhovered__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C.OnHovered__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticPresetButton_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UWidget*                                             Ref;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
