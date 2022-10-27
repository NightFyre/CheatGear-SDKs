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
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.ChangeDescriptionOnPS4
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AudioSettings_C::ChangeDescriptionOnPS4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.ChangeDescriptionOnPS4");
		
		UBP_AudioSettings_C_ChangeDescriptionOnPS4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.ScrollToFocusedWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AudioSettings_C::ScrollToFocusedWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.ScrollToFocusedWidget");
		
		UBP_AudioSettings_C_ScrollToFocusedWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.ShowHoveredInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoveredTitle                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        HoveredDescription                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_AudioSettings_C::ShowHoveredInfo(const class FText& HoveredTitle, const class FText& HoveredDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.ShowHoveredInfo");
		
		UBP_AudioSettings_C_ShowHoveredInfo_Params params {};
		params.HoveredTitle = HoveredTitle;
		params.HoveredDescription = HoveredDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_AudioSettings_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.OnFocusReceived");
		
		UBP_AudioSettings_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.Get_OptionBackgroundVolMultiplier_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_AudioSettings_C::Get_OptionBackgroundVolMultiplier_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.Get_OptionBackgroundVolMultiplier_Visibility_1");
		
		UBP_AudioSettings_C_Get_OptionBackgroundVolMultiplier_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.Get_BtnSaveChanges_bIsEnabled_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_AudioSettings_C::Get_BtnSaveChanges_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.Get_BtnSaveChanges_bIsEnabled_1");
		
		UBP_AudioSettings_C_Get_BtnSaveChanges_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.PopulateOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AudioSettings_C::PopulateOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.PopulateOptions");
		
		UBP_AudioSettings_C_PopulateOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.OnTabSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AudioSettings_C::OnTabSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.OnTabSelected");
		
		UBP_AudioSettings_C_OnTabSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_AudioSettings_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.Construct");
		
		UBP_AudioSettings_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.OnGameUserSettingsUINeedsUpdate_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AudioSettings_C::OnGameUserSettingsUINeedsUpdate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.OnGameUserSettingsUINeedsUpdate_Event_1");
		
		UBP_AudioSettings_C_OnGameUserSettingsUINeedsUpdate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.Update Audio Settings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AudioSettings_C::Update_Audio_Settings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.Update Audio Settings");
		
		UBP_AudioSettings_C_Update_Audio_Settings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.BlueprintResetToDefaults
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_AudioSettings_C::BlueprintResetToDefaults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.BlueprintResetToDefaults");
		
		UBP_AudioSettings_C_BlueprintResetToDefaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.BlueprintApplyChanges
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_AudioSettings_C::BlueprintApplyChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.BlueprintApplyChanges");
		
		UBP_AudioSettings_C_BlueprintApplyChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.OnOptionHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UBP_OptionsRow_BaseClass_C*                  OptionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AudioSettings_C::OnOptionHovered(const class FText& Title, const class FText& Description, class UBP_OptionsRow_BaseClass_C* OptionWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.OnOptionHovered");
		
		UBP_AudioSettings_C_OnOptionHovered_Params params {};
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
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.OnOptionModified
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_OptionsRow_BaseClass_C*                  OptionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AudioSettings_C::OnOptionModified(class UBP_OptionsRow_BaseClass_C* OptionWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.OnOptionModified");
		
		UBP_AudioSettings_C_OnOptionModified_Params params {};
		params.OptionWidget = OptionWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.BlueprintRefreshSettings
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_AudioSettings_C::BlueprintRefreshSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.BlueprintRefreshSettings");
		
		UBP_AudioSettings_C_BlueprintRefreshSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.OnSliderValueChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AudioSettings_C::OnSliderValueChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.OnSliderValueChanged");
		
		UBP_AudioSettings_C_OnSliderValueChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.ExecuteUbergraph_BP_AudioSettings
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AudioSettings_C::ExecuteUbergraph_BP_AudioSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.ExecuteUbergraph_BP_AudioSettings");
		
		UBP_AudioSettings_C_ExecuteUbergraph_BP_AudioSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AudioSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AudioSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_AudioSettings.BP_AudioSettings_C");
		return ptr;
	}

}


