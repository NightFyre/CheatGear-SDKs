/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.ApplyControllerLayout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Layout_Name                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ControlSettings_C::ApplyControllerLayout(const class FName& Layout_Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.ApplyControllerLayout");
		
		UBP_ControlSettings_C_ApplyControllerLayout_Params params {};
		params.Layout_Name = Layout_Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.HideSettingsOnConsole
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::HideSettingsOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.HideSettingsOnConsole");
		
		UBP_ControlSettings_C_HideSettingsOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.ChangeDescriptionOnPS4
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::ChangeDescriptionOnPS4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.ChangeDescriptionOnPS4");
		
		UBP_ControlSettings_C_ChangeDescriptionOnPS4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.HideMouseSettingsOnConsole
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::HideMouseSettingsOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.HideMouseSettingsOnConsole");
		
		UBP_ControlSettings_C_HideMouseSettingsOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.PopulateGamepadLayoutSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ControlSettings_C::PopulateGamepadLayoutSettings(const class FName& Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.PopulateGamepadLayoutSettings");
		
		UBP_ControlSettings_C_PopulateGamepadLayoutSettings_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.ScrollToFocusedWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::ScrollToFocusedWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.ScrollToFocusedWidget");
		
		UBP_ControlSettings_C_ScrollToFocusedWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_ControlSettings_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.OnFocusReceived");
		
		UBP_ControlSettings_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.UpdateOpticSensitivity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bGamepad                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EOpticZoomLevel                                    ZoomLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Sensitivity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ControlSettings_C::UpdateOpticSensitivity(bool bGamepad, EOpticZoomLevel ZoomLevel, float Sensitivity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.UpdateOpticSensitivity");
		
		UBP_ControlSettings_C_UpdateOpticSensitivity_Params params {};
		params.bGamepad = bGamepad;
		params.ZoomLevel = ZoomLevel;
		params.Sensitivity = Sensitivity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.ShowHoveredInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoveredTitle                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        HoveredDescription                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ControlSettings_C::ShowHoveredInfo(const class FText& HoveredTitle, const class FText& HoveredDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.ShowHoveredInfo");
		
		UBP_ControlSettings_C_ShowHoveredInfo_Params params {};
		params.HoveredTitle = HoveredTitle;
		params.HoveredDescription = HoveredDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.PopulateGamepadSettings
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::PopulateGamepadSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.PopulateGamepadSettings");
		
		UBP_ControlSettings_C_PopulateGamepadSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.PopulateSensitivityModifierSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::PopulateSensitivityModifierSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.PopulateSensitivityModifierSettings");
		
		UBP_ControlSettings_C_PopulateSensitivityModifierSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.PopulateMouseSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::PopulateMouseSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.PopulateMouseSettings");
		
		UBP_ControlSettings_C_PopulateMouseSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.PopulateMainInputSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::PopulateMainInputSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.PopulateMainInputSettings");
		
		UBP_ControlSettings_C_PopulateMainInputSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.PopulateControlSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::PopulateControlSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.PopulateControlSettings");
		
		UBP_ControlSettings_C_PopulateControlSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.Get_BtnSaveChanges_bIsEnabled_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_ControlSettings_C::Get_BtnSaveChanges_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.Get_BtnSaveChanges_bIsEnabled_1");
		
		UBP_ControlSettings_C_Get_BtnSaveChanges_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.PopulateOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::PopulateOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.PopulateOptions");
		
		UBP_ControlSettings_C_PopulateOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.OnTabSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::OnTabSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.OnTabSelected");
		
		UBP_ControlSettings_C_OnTabSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.Construct");
		
		UBP_ControlSettings_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.OnGameUserSettingsUINeedsUpdate_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::OnGameUserSettingsUINeedsUpdate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.OnGameUserSettingsUINeedsUpdate_Event_1");
		
		UBP_ControlSettings_C_OnGameUserSettingsUINeedsUpdate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.BlueprintResetToDefaults
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::BlueprintResetToDefaults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.BlueprintResetToDefaults");
		
		UBP_ControlSettings_C_BlueprintResetToDefaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.BlueprintRefreshSettings
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::BlueprintRefreshSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.BlueprintRefreshSettings");
		
		UBP_ControlSettings_C_BlueprintRefreshSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.BlueprintApplyChanges
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::BlueprintApplyChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.BlueprintApplyChanges");
		
		UBP_ControlSettings_C_BlueprintApplyChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.ApplyMouseSettings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::ApplyMouseSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.ApplyMouseSettings");
		
		UBP_ControlSettings_C_ApplyMouseSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.ApplyGamepadSettings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::ApplyGamepadSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.ApplyGamepadSettings");
		
		UBP_ControlSettings_C_ApplyGamepadSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.ApplyGeneralSettings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::ApplyGeneralSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.ApplyGeneralSettings");
		
		UBP_ControlSettings_C_ApplyGeneralSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionsGamepadXSensitivity_K2Node_ComponentBoundEvent_58_OnOptionHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UBP_OptionsRow_BaseClass_C*                  OptionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ControlSettings_C::BndEvt__OptionsGamepadXSensitivity_K2Node_ComponentBoundEvent_58_OnOptionHovered__DelegateSignature(const class FText& Title, const class FText& Description, class UBP_OptionsRow_BaseClass_C* OptionWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionsGamepadXSensitivity_K2Node_ComponentBoundEvent_58_OnOptionHovered__DelegateSignature");
		
		UBP_ControlSettings_C_BndEvt__OptionsGamepadXSensitivity_K2Node_ComponentBoundEvent_58_OnOptionHovered__DelegateSignature_Params params {};
		params.Title = Title;
		params.Description = Description;
		params.OptionWidget = OptionWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_69_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Console_Variable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ControlSettings_C::BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_69_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_69_OnOptionSelected__DelegateSignature");
		
		UBP_ControlSettings_C_BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_69_OnOptionSelected__DelegateSignature_Params params {};
		params.ID = ID;
		params.Text = Text;
		params.SelectInfo = SelectInfo;
		params.Console_Variable = Console_Variable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_70_OnOptionHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UBP_OptionsRow_BaseClass_C*                  OptionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ControlSettings_C::BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_70_OnOptionHovered__DelegateSignature(const class FText& Title, const class FText& Description, class UBP_OptionsRow_BaseClass_C* OptionWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_70_OnOptionHovered__DelegateSignature");
		
		UBP_ControlSettings_C_BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_70_OnOptionHovered__DelegateSignature_Params params {};
		params.Title = Title;
		params.Description = Description;
		params.OptionWidget = OptionWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_72_OnOptionUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UBP_OptionsRow_BaseClass_C*                  OptionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ControlSettings_C::BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_72_OnOptionUnhovered__DelegateSignature(class UBP_OptionsRow_BaseClass_C* OptionWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_72_OnOptionUnhovered__DelegateSignature");
		
		UBP_ControlSettings_C_BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_72_OnOptionUnhovered__DelegateSignature_Params params {};
		params.OptionWidget = OptionWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.OnOptionHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UBP_OptionsRow_BaseClass_C*                  OptionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ControlSettings_C::OnOptionHovered(const class FText& Title, const class FText& Description, class UBP_OptionsRow_BaseClass_C* OptionWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.OnOptionHovered");
		
		UBP_ControlSettings_C_OnOptionHovered_Params params {};
		params.Title = Title;
		params.Description = Description;
		params.OptionWidget = OptionWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.OnOptionModified
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_OptionsRow_BaseClass_C*                  OptionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ControlSettings_C::OnOptionModified(class UBP_OptionsRow_BaseClass_C* OptionWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.OnOptionModified");
		
		UBP_ControlSettings_C_OnOptionModified_Params params {};
		params.OptionWidget = OptionWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionFreeaimDeadzone_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ControlSettings_C::BndEvt__OptionFreeaimDeadzone_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionFreeaimDeadzone_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature");
		
		UBP_ControlSettings_C_BndEvt__OptionFreeaimDeadzone_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.OnSliderValueChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ControlSettings_C::OnSliderValueChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.OnSliderValueChanged");
		
		UBP_ControlSettings_C_OnSliderValueChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.OnProfileBlockLoadedDelegate_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EProfileBlockType                                  Type                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromCloud                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ControlSettings_C::OnProfileBlockLoadedDelegate_Event_1(EProfileBlockType Type, bool bFromCloud)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.OnProfileBlockLoadedDelegate_Event_1");
		
		UBP_ControlSettings_C_OnProfileBlockLoadedDelegate_Event_1_Params params {};
		params.Type = Type;
		params.bFromCloud = bFromCloud;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.OnGamepadLayoutApplied_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ControlSettings_C::OnGamepadLayoutApplied_Event(const class FName& NewID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.OnGamepadLayoutApplied_Event");
		
		UBP_ControlSettings_C_OnGamepadLayoutApplied_Event_Params params {};
		params.NewID = NewID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionsGamepadLayout_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ControlSettings_C::BndEvt__OptionsGamepadLayout_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionsGamepadLayout_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature");
		
		UBP_ControlSettings_C_BndEvt__OptionsGamepadLayout_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.Destruct");
		
		UBP_ControlSettings_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.LoadAndForwardControllerLayout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ControlSettings_C::LoadAndForwardControllerLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.LoadAndForwardControllerLayout");
		
		UBP_ControlSettings_C_LoadAndForwardControllerLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ControlSettings.BP_ControlSettings_C.ExecuteUbergraph_BP_ControlSettings
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ControlSettings_C::ExecuteUbergraph_BP_ControlSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ControlSettings.BP_ControlSettings_C.ExecuteUbergraph_BP_ControlSettings");
		
		UBP_ControlSettings_C_ExecuteUbergraph_BP_ControlSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ControlSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ControlSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ControlSettings.BP_ControlSettings_C");
		return ptr;
	}

}


