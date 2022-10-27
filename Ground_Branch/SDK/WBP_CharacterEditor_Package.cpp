/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.SavePrompt
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::SavePrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.SavePrompt");
		
		UWBP_CharacterEditor_C_SavePrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.SaveKit
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::SaveKit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.SaveKit");
		
		UWBP_CharacterEditor_C_SaveKit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.CheckFirearmAmmunition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                OutFirearmsMissingAmmunition                               (Parm, OutParm)
	 */
	void UWBP_CharacterEditor_C::CheckFirearmAmmunition(TArray<class FText>* OutFirearmsMissingAmmunition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.CheckFirearmAmmunition");
		
		UWBP_CharacterEditor_C_CheckFirearmAmmunition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFirearmsMissingAmmunition != nullptr)
			*OutFirearmsMissingAmmunition = params.OutFirearmsMissingAmmunition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.GetApplyEnabled
	 * 		Flags  -> ()
	 */
	bool UWBP_CharacterEditor_C::GetApplyEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.GetApplyEnabled");
		
		UWBP_CharacterEditor_C_GetApplyEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.GenerateJsonObj
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           OutJsonObj                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterEditor_C::GenerateJsonObj(class UVaRestJsonObject** OutJsonObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.GenerateJsonObj");
		
		UWBP_CharacterEditor_C_GenerateJsonObj_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutJsonObj != nullptr)
			*OutJsonObj = params.OutJsonObj;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.ZoomCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              WheelDelta                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterEditor_C::ZoomCamera(float WheelDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.ZoomCamera");
		
		UWBP_CharacterEditor_C_ZoomCamera_Params params {};
		params.WheelDelta = WheelDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.OnMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_CharacterEditor_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.OnMouseWheel");
		
		UWBP_CharacterEditor_C_OnMouseWheel_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.RotateCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   MouseDelta                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterEditor_C::RotateCharacter(const struct FVector2D& MouseDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.RotateCharacter");
		
		UWBP_CharacterEditor_C_RotateCharacter_Params params {};
		params.MouseDelta = MouseDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.MoveCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   MouseDelta                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterEditor_C::MoveCamera(const struct FVector2D& MouseDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.MoveCamera");
		
		UWBP_CharacterEditor_C_MoveCamera_Params params {};
		params.MouseDelta = MouseDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.GetUnavailableToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_CharacterEditor_C::GetUnavailableToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.GetUnavailableToolTipWidget");
		
		UWBP_CharacterEditor_C_GetUnavailableToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_CharacterEditor_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.OnMouseMove");
		
		UWBP_CharacterEditor_C_OnMouseMove_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.OnMenuAnchorKitGetMenuContent
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_CharacterEditor_C::OnMenuAnchorKitGetMenuContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.OnMenuAnchorKitGetMenuContent");
		
		UWBP_CharacterEditor_C_OnMenuAnchorKitGetMenuContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::BndEvt__Button_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_CharacterEditor_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.Construct");
		
		UWBP_CharacterEditor_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.HideRightSelectionArea
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::HideRightSelectionArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.HideRightSelectionArea");
		
		UWBP_CharacterEditor_C_HideRightSelectionArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__EditableTextBox_Name_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterEditor_C::BndEvt__EditableTextBox_Name_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__EditableTextBox_Name_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UWBP_CharacterEditor_C_BndEvt__EditableTextBox_Name_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.SetupPlayerName
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::SetupPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.SetupPlayerName");
		
		UWBP_CharacterEditor_C_SetupPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.CameraSetup
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::CameraSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.CameraSetup");
		
		UWBP_CharacterEditor_C_CameraSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.SetupCharacter
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::SetupCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.SetupCharacter");
		
		UWBP_CharacterEditor_C_SetupCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.ShowRightSelectionArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        SelectionListTitle                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bShowClear                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bShowSave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CharacterEditor_C::ShowRightSelectionArea(const class FText& SelectionListTitle, bool bShowClear, bool bShowSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.ShowRightSelectionArea");
		
		UWBP_CharacterEditor_C_ShowRightSelectionArea_Params params {};
		params.SelectionListTitle = SelectionListTitle;
		params.bShowClear = bShowClear;
		params.bShowSave = bShowSave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.HideLeftSelectionArea
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::HideLeftSelectionArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.HideLeftSelectionArea");
		
		UWBP_CharacterEditor_C_HideLeftSelectionArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.ShowLeftSelectionArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        SelectionListTitle                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bShowClear                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bShowSave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CharacterEditor_C::ShowLeftSelectionArea(const class FText& SelectionListTitle, bool bShowClear, bool bShowSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.ShowLeftSelectionArea");
		
		UWBP_CharacterEditor_C_ShowLeftSelectionArea_Params params {};
		params.SelectionListTitle = SelectionListTitle;
		params.bShowClear = bShowClear;
		params.bShowSave = bShowSave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__HIDDEN_Button_Holster_K2Node_ComponentBoundEvent_3_PostClear__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::BndEvt__HIDDEN_Button_Holster_K2Node_ComponentBoundEvent_3_PostClear__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__HIDDEN_Button_Holster_K2Node_ComponentBoundEvent_3_PostClear__DelegateSignature");
		
		UWBP_CharacterEditor_C_BndEvt__HIDDEN_Button_Holster_K2Node_ComponentBoundEvent_3_PostClear__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__Button_Primary_K2Node_ComponentBoundEvent_4_PostUpdate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::BndEvt__Button_Primary_K2Node_ComponentBoundEvent_4_PostUpdate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__Button_Primary_K2Node_ComponentBoundEvent_4_PostUpdate__DelegateSignature");
		
		UWBP_CharacterEditor_C_BndEvt__Button_Primary_K2Node_ComponentBoundEvent_4_PostUpdate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__Button_CancelLeftSelection_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::BndEvt__Button_CancelLeftSelection_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__Button_CancelLeftSelection_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_CharacterEditor_C_BndEvt__Button_CancelLeftSelection_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.HideLeftSelectionAreaIfVisible
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::HideLeftSelectionAreaIfVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.HideLeftSelectionAreaIfVisible");
		
		UWBP_CharacterEditor_C_HideLeftSelectionAreaIfVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.HideRightSelectionAreaIfVisible
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::HideRightSelectionAreaIfVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.HideRightSelectionAreaIfVisible");
		
		UWBP_CharacterEditor_C_HideRightSelectionAreaIfVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__Button_Ok_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::BndEvt__Button_Ok_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__Button_Ok_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_CharacterEditor_C_BndEvt__Button_Ok_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_CharacterEditor_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LoadoutName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UVaRestJsonObject*                           JsonObj                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterEditor_C::Setup(const class FName& LoadoutName, class UVaRestJsonObject* JsonObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.Setup");
		
		UWBP_CharacterEditor_C_Setup_Params params {};
		params.LoadoutName = LoadoutName;
		params.JsonObj = JsonObj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.SwitchBack
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::SwitchBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.SwitchBack");
		
		UWBP_CharacterEditor_C_SwitchBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.SwitchTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterEditor_C::SwitchTo(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.SwitchTo");
		
		UWBP_CharacterEditor_C_SwitchTo_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterEditor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.Tick");
		
		UWBP_CharacterEditor_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.Cancel
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.Cancel");
		
		UWBP_CharacterEditor_C_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.CancelInternal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_DialogueBox_C*                          Dialogue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterEditor_C::CancelInternal(class UWBP_DialogueBox_C* Dialogue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.CancelInternal");
		
		UWBP_CharacterEditor_C_CancelInternal_Params params {};
		params.Dialogue = Dialogue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.UpdateSummary
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::UpdateSummary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.UpdateSummary");
		
		UWBP_CharacterEditor_C_UpdateSummary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.InventoryItemAdded_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGBItem*                                     InvItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterEditor_C::InventoryItemAdded_Event_1(class AGBCharacter* Character, class AGBItem* InvItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.InventoryItemAdded_Event_1");
		
		UWBP_CharacterEditor_C_InventoryItemAdded_Event_1_Params params {};
		params.Character = Character;
		params.InvItem = InvItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__WBP_CharacterEditor_Button_86_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::BndEvt__WBP_CharacterEditor_Button_86_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__WBP_CharacterEditor_Button_86_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_CharacterEditor_C_BndEvt__WBP_CharacterEditor_Button_86_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__WBP_CharacterEditor_Button_Outfit_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::BndEvt__WBP_CharacterEditor_Button_Outfit_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__WBP_CharacterEditor_Button_Outfit_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_CharacterEditor_C_BndEvt__WBP_CharacterEditor_Button_Outfit_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__WBP_CharacterEditor_Button_Operator_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::BndEvt__WBP_CharacterEditor_Button_Operator_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__WBP_CharacterEditor_Button_Operator_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_CharacterEditor_C_BndEvt__WBP_CharacterEditor_Button_Operator_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__WBP_CharacterEditor_Button_GearKit_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::BndEvt__WBP_CharacterEditor_Button_GearKit_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__WBP_CharacterEditor_Button_GearKit_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_CharacterEditor_C_BndEvt__WBP_CharacterEditor_Button_GearKit_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.OnKitAssetsLoaded_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             LoadedAssets                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_CharacterEditor_C::OnKitAssetsLoaded_Event(TArray<class UObject*> LoadedAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.OnKitAssetsLoaded_Event");
		
		UWBP_CharacterEditor_C_OnKitAssetsLoaded_Event_Params params {};
		params.LoadedAssets = LoadedAssets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.PostSetup
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::PostSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.PostSetup");
		
		UWBP_CharacterEditor_C_PostSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.Destruct");
		
		UWBP_CharacterEditor_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.InternalApply
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::InternalApply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.InternalApply");
		
		UWBP_CharacterEditor_C_InternalApply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.OnCancelClicked_Event_1
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::OnCancelClicked_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.OnCancelClicked_Event_1");
		
		UWBP_CharacterEditor_C_OnCancelClicked_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.Secondary_PreUpdate_Event_1
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::Secondary_PreUpdate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.Secondary_PreUpdate_Event_1");
		
		UWBP_CharacterEditor_C_Secondary_PreUpdate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.BindSecondaryPreUpdate
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::BindSecondaryPreUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.BindSecondaryPreUpdate");
		
		UWBP_CharacterEditor_C_BindSecondaryPreUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.ResetNVGTags
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::ResetNVGTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.ResetNVGTags");
		
		UWBP_CharacterEditor_C_ResetNVGTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.SetHUDVisibillity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewHidden                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CharacterEditor_C::SetHUDVisibillity(bool NewHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.SetHUDVisibillity");
		
		UWBP_CharacterEditor_C_SetHUDVisibillity_Params params {};
		params.NewHidden = NewHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__WBP_CharacterEditor_Button_Secondary_K2Node_ComponentBoundEvent_1_PostUpdate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::BndEvt__WBP_CharacterEditor_Button_Secondary_K2Node_ComponentBoundEvent_1_PostUpdate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.BndEvt__WBP_CharacterEditor_Button_Secondary_K2Node_ComponentBoundEvent_1_PostUpdate__DelegateSignature");
		
		UWBP_CharacterEditor_C_BndEvt__WBP_CharacterEditor_Button_Secondary_K2Node_ComponentBoundEvent_1_PostUpdate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.ExecuteUbergraph_WBP_CharacterEditor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterEditor_C::ExecuteUbergraph_WBP_CharacterEditor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.ExecuteUbergraph_WBP_CharacterEditor");
		
		UWBP_CharacterEditor_C_ExecuteUbergraph_WBP_CharacterEditor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.CancelClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterEditor_C::CancelClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.CancelClicked__DelegateSignature");
		
		UWBP_CharacterEditor_C_CancelClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterEditor.WBP_CharacterEditor_C.OkClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           JsonObj                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterEditor_C::OkClicked__DelegateSignature(class UVaRestJsonObject* JsonObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterEditor.WBP_CharacterEditor_C.OkClicked__DelegateSignature");
		
		UWBP_CharacterEditor_C_OkClicked__DelegateSignature_Params params {};
		params.JsonObj = JsonObj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CharacterEditor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CharacterEditor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CharacterEditor.WBP_CharacterEditor_C");
		return ptr;
	}

}


