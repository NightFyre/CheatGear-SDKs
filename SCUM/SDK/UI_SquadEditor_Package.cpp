/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.GetBlackVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_SquadEditor_C::GetBlackVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.GetBlackVisibility");
		
		UUI_SquadEditor_C_GetBlackVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_InformationTextBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_SquadEditor_C::OnMouseButtonDown_InformationTextBox(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_InformationTextBox");
		
		UUI_SquadEditor_C_OnMouseButtonDown_InformationTextBox_Params params {};
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
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.UpdateOptions
	 * 		Flags  -> ()
	 */
	void UUI_SquadEditor_C::UpdateOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.UpdateOptions");
		
		UUI_SquadEditor_C_UpdateOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_MessageTextBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_SquadEditor_C::OnMouseButtonDown_MessageTextBox(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_MessageTextBox");
		
		UUI_SquadEditor_C_OnMouseButtonDown_MessageTextBox_Params params {};
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
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.LoadData
	 * 		Flags  -> ()
	 */
	void UUI_SquadEditor_C::LoadData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.LoadData");
		
		UUI_SquadEditor_C_LoadData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.LoadEmblem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FConZSquadEmblem                            emblem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_SquadEditor_C::LoadEmblem(const struct FConZSquadEmblem& emblem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.LoadEmblem");
		
		UUI_SquadEditor_C_LoadEmblem_Params params {};
		params.emblem = emblem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.SaveData
	 * 		Flags  -> ()
	 */
	void UUI_SquadEditor_C::SaveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.SaveData");
		
		UUI_SquadEditor_C_SaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.EmblemUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDropdownMenuSelectionWidget*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SquadEditor_C::EmblemUpdate(class UDropdownMenuSelectionWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.EmblemUpdate");
		
		UUI_SquadEditor_C_EmblemUpdate_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.ColorClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDropdownMenuSelectionWidget*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SquadEditor_C::ColorClicked(class UDropdownMenuSelectionWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.ColorClicked");
		
		UUI_SquadEditor_C_ColorClicked_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.SymbolClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDropdownMenuSelectionWidget*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SquadEditor_C::SymbolClicked(class UDropdownMenuSelectionWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.SymbolClicked");
		
		UUI_SquadEditor_C_SymbolClicked_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.BackgroundClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDropdownMenuSelectionWidget*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SquadEditor_C::BackgroundClicked(class UDropdownMenuSelectionWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BackgroundClicked");
		
		UUI_SquadEditor_C_BackgroundClicked_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_SquadEditor_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.Construct");
		
		UUI_SquadEditor_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadEditor_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_SquadEditor_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadEditor_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_SquadEditor_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_SquadEditor_C::BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UUI_SquadEditor_C_BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_SquadEditor_C::BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature");
		
		UUI_SquadEditor_C_BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_SquadEditor_C::BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature");
		
		UUI_SquadEditor_C_BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEditor.UI_SquadEditor_C.ExecuteUbergraph_UI_SquadEditor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SquadEditor_C::ExecuteUbergraph_UI_SquadEditor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.ExecuteUbergraph_UI_SquadEditor");
		
		UUI_SquadEditor_C_ExecuteUbergraph_UI_SquadEditor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SquadEditor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SquadEditor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SquadEditor.UI_SquadEditor_C");
		return ptr;
	}

}


