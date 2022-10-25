/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.InternalRecursiveSetContentIsEnabled
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GameModifierSettingsSection_C::InternalRecursiveSetContentIsEnabled(bool bInIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.InternalRecursiveSetContentIsEnabled");
		
		UWBP_GameModifierSettingsSection_C_InternalRecursiveSetContentIsEnabled_Params params {};
		params.bInIsEnabled = bInIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.IsActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GameModifierSettingsSection_C::IsActive(bool* bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.IsActive");
		
		UWBP_GameModifierSettingsSection_C_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bActive != nullptr)
			*bActive = params.bActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.IsExpanded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bExpanded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GameModifierSettingsSection_C::IsExpanded(bool* bExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.IsExpanded");
		
		UWBP_GameModifierSettingsSection_C_IsExpanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bExpanded != nullptr)
			*bExpanded = params.bExpanded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.GetTitleText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        TitleText                                                  (Parm, OutParm)
	 */
	void UWBP_GameModifierSettingsSection_C::GetTitleText(class FText* TitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.GetTitleText");
		
		UWBP_GameModifierSettingsSection_C_GetTitleText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TitleText != nullptr)
			*TitleText = params.TitleText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.SetIsActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GameModifierSettingsSection_C::SetIsActive(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.SetIsActive");
		
		UWBP_GameModifierSettingsSection_C_SetIsActive_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.SetExpansionState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bExpanded                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GameModifierSettingsSection_C::SetExpansionState(bool bExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.SetExpansionState");
		
		UWBP_GameModifierSettingsSection_C_SetExpansionState_Params params {};
		params.bExpanded = bExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.SetTitleText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InTitleText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_GameModifierSettingsSection_C::SetTitleText(const class FText& InTitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.SetTitleText");
		
		UWBP_GameModifierSettingsSection_C_SetTitleText_Params params {};
		params.InTitleText = InTitleText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GameModifierSettingsSection_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.PreConstruct");
		
		UWBP_GameModifierSettingsSection_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.BndEvt__SectionExpansionToggleBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_GameModifierSettingsSection_C::BndEvt__SectionExpansionToggleBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.BndEvt__SectionExpansionToggleBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_GameModifierSettingsSection_C_BndEvt__SectionExpansionToggleBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.BndEvt__SectionActiveToggleChkBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GameModifierSettingsSection_C::BndEvt__SectionActiveToggleChkBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.BndEvt__SectionActiveToggleChkBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UWBP_GameModifierSettingsSection_C_BndEvt__SectionActiveToggleChkBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.ExecuteUbergraph_WBP_GameModifierSettingsSection
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GameModifierSettingsSection_C::ExecuteUbergraph_WBP_GameModifierSettingsSection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.ExecuteUbergraph_WBP_GameModifierSettingsSection");
		
		UWBP_GameModifierSettingsSection_C_ExecuteUbergraph_WBP_GameModifierSettingsSection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_GameModifierSettingsSection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_GameModifierSettingsSection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C");
		return ptr;
	}

}


