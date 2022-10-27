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
	 * 		Name   -> Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.PlayPrisonerEnteringSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               backwards                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CharacterCreationPanel_C::PlayPrisonerEnteringSequence(bool backwards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.PlayPrisonerEnteringSequence");
		
		UUI_CharacterCreationPanel_C_PlayPrisonerEnteringSequence_Params params {};
		params.backwards = backwards;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1199_OnOkClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CharacterCreationPanel_C::BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1199_OnOkClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1199_OnOkClicked__DelegateSignature");
		
		UUI_CharacterCreationPanel_C_BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1199_OnOkClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1260_OnCancelClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CharacterCreationPanel_C::BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1260_OnCancelClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1260_OnCancelClicked__DelegateSignature");
		
		UUI_CharacterCreationPanel_C_BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1260_OnCancelClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.ShowErrorDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_CharacterCreationPanel_C::ShowErrorDialog(const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.ShowErrorDialog");
		
		UUI_CharacterCreationPanel_C_ShowErrorDialog_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.OnUserProfileCreated
	 * 		Flags  -> ()
	 */
	void UUI_CharacterCreationPanel_C::OnUserProfileCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.OnUserProfileCreated");
		
		UUI_CharacterCreationPanel_C_OnUserProfileCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.ShowCriminalRecord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterTemplate                          CharacterTemplate                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        Mass                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_CharacterCreationPanel_C::ShowCriminalRecord(const struct FCharacterTemplate& CharacterTemplate, const class FText& Mass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.ShowCriminalRecord");
		
		UUI_CharacterCreationPanel_C_ShowCriminalRecord_Params params {};
		params.CharacterTemplate = CharacterTemplate;
		params.Mass = Mass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.ExecuteUbergraph_UI_CharacterCreationPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CharacterCreationPanel_C::ExecuteUbergraph_UI_CharacterCreationPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.ExecuteUbergraph_UI_CharacterCreationPanel");
		
		UUI_CharacterCreationPanel_C_ExecuteUbergraph_UI_CharacterCreationPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CharacterCreationPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CharacterCreationPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CharacterCreationPanel.UI_CharacterCreationPanel_C");
		return ptr;
	}

}


