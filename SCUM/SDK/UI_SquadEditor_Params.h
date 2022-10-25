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
	 * Function UI_SquadEditor.UI_SquadEditor_C.GetBlackVisibility
	 */
	struct UUI_SquadEditor_C_GetBlackVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_InformationTextBox
	 */
	struct UUI_SquadEditor_C_OnMouseButtonDown_InformationTextBox_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.UpdateOptions
	 */
	struct UUI_SquadEditor_C_UpdateOptions_Params
	{	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_MessageTextBox
	 */
	struct UUI_SquadEditor_C_OnMouseButtonDown_MessageTextBox_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.LoadData
	 */
	struct UUI_SquadEditor_C_LoadData_Params
	{	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.LoadEmblem
	 */
	struct UUI_SquadEditor_C_LoadEmblem_Params
	{
	public:
		struct FConZSquadEmblem                                    emblem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.SaveData
	 */
	struct UUI_SquadEditor_C_SaveData_Params
	{	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.EmblemUpdate
	 */
	struct UUI_SquadEditor_C_EmblemUpdate_Params
	{
	public:
		class UDropdownMenuSelectionWidget*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.ColorClicked
	 */
	struct UUI_SquadEditor_C_ColorClicked_Params
	{
	public:
		class UDropdownMenuSelectionWidget*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.SymbolClicked
	 */
	struct UUI_SquadEditor_C_SymbolClicked_Params
	{
	public:
		class UDropdownMenuSelectionWidget*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.BackgroundClicked
	 */
	struct UUI_SquadEditor_C_BackgroundClicked_Params
	{
	public:
		class UDropdownMenuSelectionWidget*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.Construct
	 */
	struct UUI_SquadEditor_C_Construct_Params
	{	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_SquadEditor_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_SquadEditor_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UUI_SquadEditor_C_BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 */
	struct UUI_SquadEditor_C_BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 */
	struct UUI_SquadEditor_C_BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_SquadEditor.UI_SquadEditor_C.ExecuteUbergraph_UI_SquadEditor
	 */
	struct UUI_SquadEditor_C_ExecuteUbergraph_UI_SquadEditor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
