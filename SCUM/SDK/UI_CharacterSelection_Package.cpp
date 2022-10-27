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
	 * 		Name   -> Function UI_CharacterSelection.UI_CharacterSelection_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UUI_CharacterSelection_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnPreviewKeyDown");
		
		UUI_CharacterSelection_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CharacterSelection_C::BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");
		
		UUI_CharacterSelection_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CharacterSelection_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature");
		
		UUI_CharacterSelection_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CharacterSelection_C::BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UUI_CharacterSelection_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterSelection.UI_CharacterSelection_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_CharacterSelection_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.Construct");
		
		UUI_CharacterSelection_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CharacterSelection_C::BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature");
		
		UUI_CharacterSelection_C_BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CharacterSelection_C::BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature");
		
		UUI_CharacterSelection_C_BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CharacterSelection_C::BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature");
		
		UUI_CharacterSelection_C_BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CharacterSelection_C::BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature");
		
		UUI_CharacterSelection_C_BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterSelection.UI_CharacterSelection_C.OnESC
	 * 		Flags  -> ()
	 */
	void UUI_CharacterSelection_C::OnESC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnESC");
		
		UUI_CharacterSelection_C_OnESC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterSelection.UI_CharacterSelection_C.CancelCriminalRecord
	 * 		Flags  -> ()
	 */
	void UUI_CharacterSelection_C::CancelCriminalRecord()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.CancelCriminalRecord");
		
		UUI_CharacterSelection_C_CancelCriminalRecord_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterSelection.UI_CharacterSelection_C.CancelDeleteCharacter
	 * 		Flags  -> ()
	 */
	void UUI_CharacterSelection_C::CancelDeleteCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.CancelDeleteCharacter");
		
		UUI_CharacterSelection_C_CancelDeleteCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterSelection.UI_CharacterSelection_C.Back
	 * 		Flags  -> ()
	 */
	void UUI_CharacterSelection_C::Back()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.Back");
		
		UUI_CharacterSelection_C_Back_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterDeleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_CharacterSlot_C*                         Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CharacterSelection_C::OnCharacterDeleted(class UUI_CharacterSlot_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterDeleted");
		
		UUI_CharacterSelection_C_OnCharacterDeleted_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserProfile*                                UserProfile                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CharacterSelection_C::OnCharacterSelected(class UUserProfile* UserProfile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterSelected");
		
		UUI_CharacterSelection_C_OnCharacterSelected_Params params {};
		params.UserProfile = UserProfile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CharacterSelection.UI_CharacterSelection_C.ExecuteUbergraph_UI_CharacterSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CharacterSelection_C::ExecuteUbergraph_UI_CharacterSelection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.ExecuteUbergraph_UI_CharacterSelection");
		
		UUI_CharacterSelection_C_ExecuteUbergraph_UI_CharacterSelection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CharacterSelection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CharacterSelection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CharacterSelection.UI_CharacterSelection_C");
		return ptr;
	}

}


