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
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.HideVideoSettingsOnConsole
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_VideoSettings_C::HideVideoSettingsOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.HideVideoSettingsOnConsole");
		
		UBP_VideoSettings_C_HideVideoSettingsOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.OnChangedOptionVideoFOV
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewVideoFOV                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::OnChangedOptionVideoFOV(float NewVideoFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.OnChangedOptionVideoFOV");
		
		UBP_VideoSettings_C_OnChangedOptionVideoFOV_Params params {};
		params.NewVideoFOV = NewVideoFOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.ScrollToFocusedWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_VideoSettings_C::ScrollToFocusedWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.ScrollToFocusedWidget");
		
		UBP_VideoSettings_C_ScrollToFocusedWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_VideoSettings_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.OnFocusReceived");
		
		UBP_VideoSettings_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.ApplySpecialOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Apply_Original                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_VideoSettings_C::ApplySpecialOptions(bool Apply_Original)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.ApplySpecialOptions");
		
		UBP_VideoSettings_C_ApplySpecialOptions_Params params {};
		params.Apply_Original = Apply_Original;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.SetWarning
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Body                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_VideoSettings_C::SetWarning(const class FText& Body, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.SetWarning");
		
		UBP_VideoSettings_C_SetWarning_Params params {};
		params.Body = Body;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.DetectHighResolution
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Is_High_Resolution                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_VideoSettings_C::DetectHighResolution(int32_t Width, int32_t Height, bool* Is_High_Resolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.DetectHighResolution");
		
		UBP_VideoSettings_C_DetectHighResolution_Params params {};
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Is_High_Resolution != nullptr)
			*Is_High_Resolution = params.Is_High_Resolution;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.GetOverrideValue
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UBP_OptionsRow_Dropdown_C*                   Override_Option_Element                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Modified                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_VideoSettings_C::GetOverrideValue(class UBP_OptionsRow_Dropdown_C* Override_Option_Element, class FName* Value, bool* Modified)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.GetOverrideValue");
		
		UBP_VideoSettings_C_GetOverrideValue_Params params {};
		params.Override_Option_Element = Override_Option_Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (Modified != nullptr)
			*Modified = params.Modified;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.ResetOverrideOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Process_All                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_VideoSettings_C::ResetOverrideOptions(bool Process_All)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.ResetOverrideOptions");
		
		UBP_VideoSettings_C_ResetOverrideOptions_Params params {};
		params.Process_All = Process_All;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.ShowHoveredInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoveredTitle                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        HoveredDescription                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_VideoSettings_C::ShowHoveredInfo(const class FText& HoveredTitle, const class FText& HoveredDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.ShowHoveredInfo");
		
		UBP_VideoSettings_C_ShowHoveredInfo_Params params {};
		params.HoveredTitle = HoveredTitle;
		params.HoveredDescription = HoveredDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.ResetAllSpecialOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_VideoSettings_C::ResetAllSpecialOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.ResetAllSpecialOptions");
		
		UBP_VideoSettings_C_ResetAllSpecialOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.MarkSpecialOptionDirty
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::MarkSpecialOptionDirty(const class FName& Entry, int32_t Value, class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.MarkSpecialOptionDirty");
		
		UBP_VideoSettings_C_MarkSpecialOptionDirty_Params params {};
		params.Entry = Entry;
		params.Value = Value;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.ResetSpecialOption
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Mark_as_Modified                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_VideoSettings_C::ResetSpecialOption(const class FName& Entry, int32_t Value, class UUserWidget* Widget, bool Mark_as_Modified)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.ResetSpecialOption");
		
		UBP_VideoSettings_C_ResetSpecialOption_Params params {};
		params.Entry = Entry;
		params.Value = Value;
		params.Widget = Widget;
		params.Mark_as_Modified = Mark_as_Modified;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.HasDirtyOverrideOptions
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               Is_Dirty                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_VideoSettings_C::HasDirtyOverrideOptions(bool* Is_Dirty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.HasDirtyOverrideOptions");
		
		UBP_VideoSettings_C_HasDirtyOverrideOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Is_Dirty != nullptr)
			*Is_Dirty = params.Is_Dirty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.UpdateWidgetTint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Has_Been_Marked_As_Dirty                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Has_Been_Modified                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_VideoSettings_C::UpdateWidgetTint(class UUserWidget* Widget, bool Has_Been_Marked_As_Dirty, bool Has_Been_Modified)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.UpdateWidgetTint");
		
		UBP_VideoSettings_C_UpdateWidgetTint_Params params {};
		params.Widget = Widget;
		params.Has_Been_Marked_As_Dirty = Has_Been_Marked_As_Dirty;
		params.Has_Been_Modified = Has_Been_Modified;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.MarkSettingsAsDirty
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_VideoSettings_C::MarkSettingsAsDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.MarkSettingsAsDirty");
		
		UBP_VideoSettings_C_MarkSettingsAsDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.ShowConfirmationDialog
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::ShowConfirmationDialog(class UUserWidget* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.ShowConfirmationDialog");
		
		UBP_VideoSettings_C_ShowConfirmationDialog_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.OnCancelChanges
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_VideoSettings_C::OnCancelChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.OnCancelChanges");
		
		UBP_VideoSettings_C_OnCancelChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.OnConfirmChanges
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_VideoSettings_C::OnConfirmChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.OnConfirmChanges");
		
		UBP_VideoSettings_C_OnConfirmChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_VideoSettings_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.OnKeyDown");
		
		UBP_VideoSettings_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.OverrideOptionChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        Select_Info                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Console_Variable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::OverrideOptionChanged(const class FName& ID, const class FText& Text, ESelectInfo Select_Info, const class FName& Console_Variable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.OverrideOptionChanged");
		
		UBP_VideoSettings_C_OverrideOptionChanged_Params params {};
		params.ID = ID;
		params.Text = Text;
		params.Select_Info = Select_Info;
		params.Console_Variable = Console_Variable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.PopulateAdvancedVideoOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_VideoSettings_C::PopulateAdvancedVideoOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.PopulateAdvancedVideoOptions");
		
		UBP_VideoSettings_C_PopulateAdvancedVideoOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.PopulateScalability
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_VideoSettings_C::PopulateScalability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.PopulateScalability");
		
		UBP_VideoSettings_C_PopulateScalability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.Get_BtnSaveChanges_bIsEnabled_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_VideoSettings_C::Get_BtnSaveChanges_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.Get_BtnSaveChanges_bIsEnabled_1");
		
		UBP_VideoSettings_C_Get_BtnSaveChanges_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.PopulateOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_VideoSettings_C::PopulateOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.PopulateOptions");
		
		UBP_VideoSettings_C_PopulateOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.PopulateResolutions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_VideoSettings_C::PopulateResolutions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.PopulateResolutions");
		
		UBP_VideoSettings_C_PopulateResolutions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.OnTabSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_VideoSettings_C::OnTabSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.OnTabSelected");
		
		UBP_VideoSettings_C_OnTabSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_VideoSettings_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.Construct");
		
		UBP_VideoSettings_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.OnGameUserSettingsUINeedsUpdate_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_VideoSettings_C::OnGameUserSettingsUINeedsUpdate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.OnGameUserSettingsUINeedsUpdate_Event_1");
		
		UBP_VideoSettings_C_OnGameUserSettingsUINeedsUpdate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionVideoRes_K2Node_ComponentBoundEvent_770_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Console_Variable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::BndEvt__OptionVideoRes_K2Node_ComponentBoundEvent_770_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionVideoRes_K2Node_ComponentBoundEvent_770_OnOptionSelected__DelegateSignature");
		
		UBP_VideoSettings_C_BndEvt__OptionVideoRes_K2Node_ComponentBoundEvent_770_OnOptionSelected__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsVideoMode_K2Node_ComponentBoundEvent_396_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Console_Variable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::BndEvt__OptionsVideoMode_K2Node_ComponentBoundEvent_396_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsVideoMode_K2Node_ComponentBoundEvent_396_OnOptionSelected__DelegateSignature");
		
		UBP_VideoSettings_C_BndEvt__OptionsVideoMode_K2Node_ComponentBoundEvent_396_OnOptionSelected__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsVideoVSync_K2Node_ComponentBoundEvent_523_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_VideoSettings_C::BndEvt__OptionsVideoVSync_K2Node_ComponentBoundEvent_523_OnOptionSelected__DelegateSignature(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsVideoVSync_K2Node_ComponentBoundEvent_523_OnOptionSelected__DelegateSignature");
		
		UBP_VideoSettings_C_BndEvt__OptionsVideoVSync_K2Node_ComponentBoundEvent_523_OnOptionSelected__DelegateSignature_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionAntiAliasing_K2Node_ComponentBoundEvent_1802_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Console_Variable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::BndEvt__OptionAntiAliasing_K2Node_ComponentBoundEvent_1802_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionAntiAliasing_K2Node_ComponentBoundEvent_1802_OnOptionSelected__DelegateSignature");
		
		UBP_VideoSettings_C_BndEvt__OptionAntiAliasing_K2Node_ComponentBoundEvent_1802_OnOptionSelected__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionPostProcessing_K2Node_ComponentBoundEvent_1904_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Console_Variable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::BndEvt__OptionPostProcessing_K2Node_ComponentBoundEvent_1904_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionPostProcessing_K2Node_ComponentBoundEvent_1904_OnOptionSelected__DelegateSignature");
		
		UBP_VideoSettings_C_BndEvt__OptionPostProcessing_K2Node_ComponentBoundEvent_1904_OnOptionSelected__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionShadowQuality_K2Node_ComponentBoundEvent_2028_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Console_Variable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::BndEvt__OptionShadowQuality_K2Node_ComponentBoundEvent_2028_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionShadowQuality_K2Node_ComponentBoundEvent_2028_OnOptionSelected__DelegateSignature");
		
		UBP_VideoSettings_C_BndEvt__OptionShadowQuality_K2Node_ComponentBoundEvent_2028_OnOptionSelected__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionTextureQuality_K2Node_ComponentBoundEvent_2259_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Console_Variable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::BndEvt__OptionTextureQuality_K2Node_ComponentBoundEvent_2259_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionTextureQuality_K2Node_ComponentBoundEvent_2259_OnOptionSelected__DelegateSignature");
		
		UBP_VideoSettings_C_BndEvt__OptionTextureQuality_K2Node_ComponentBoundEvent_2259_OnOptionSelected__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionEffectsQuality_K2Node_ComponentBoundEvent_2260_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Console_Variable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::BndEvt__OptionEffectsQuality_K2Node_ComponentBoundEvent_2260_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionEffectsQuality_K2Node_ComponentBoundEvent_2260_OnOptionSelected__DelegateSignature");
		
		UBP_VideoSettings_C_BndEvt__OptionEffectsQuality_K2Node_ComponentBoundEvent_2260_OnOptionSelected__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__BP_OptionsRow_Dropdown_4_K2Node_ComponentBoundEvent_2286_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Console_Variable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::BndEvt__BP_OptionsRow_Dropdown_4_K2Node_ComponentBoundEvent_2286_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__BP_OptionsRow_Dropdown_4_K2Node_ComponentBoundEvent_2286_OnOptionSelected__DelegateSignature");
		
		UBP_VideoSettings_C_BndEvt__BP_OptionsRow_Dropdown_4_K2Node_ComponentBoundEvent_2286_OnOptionSelected__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BlueprintApplyChanges
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_VideoSettings_C::BlueprintApplyChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BlueprintApplyChanges");
		
		UBP_VideoSettings_C_BlueprintApplyChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BlueprintResetToDefaults
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_VideoSettings_C::BlueprintResetToDefaults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BlueprintResetToDefaults");
		
		UBP_VideoSettings_C_BlueprintResetToDefaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsFrameRateSmoothing_K2Node_ComponentBoundEvent_16_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_VideoSettings_C::BndEvt__OptionsFrameRateSmoothing_K2Node_ComponentBoundEvent_16_OnOptionSelected__DelegateSignature(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsFrameRateSmoothing_K2Node_ComponentBoundEvent_16_OnOptionSelected__DelegateSignature");
		
		UBP_VideoSettings_C_BndEvt__OptionsFrameRateSmoothing_K2Node_ComponentBoundEvent_16_OnOptionSelected__DelegateSignature_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionQualityPresets_K2Node_ComponentBoundEvent_132_OnQualityPresetChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::BndEvt__OptionQualityPresets_K2Node_ComponentBoundEvent_132_OnQualityPresetChanged__DelegateSignature(int32_t Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionQualityPresets_K2Node_ComponentBoundEvent_132_OnQualityPresetChanged__DelegateSignature");
		
		UBP_VideoSettings_C_BndEvt__OptionQualityPresets_K2Node_ComponentBoundEvent_132_OnQualityPresetChanged__DelegateSignature_Params params {};
		params.Preset = Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsGamma_K2Node_ComponentBoundEvent_0_OnValueCommitted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::BndEvt__OptionsGamma_K2Node_ComponentBoundEvent_0_OnValueCommitted__DelegateSignature(float NewValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsGamma_K2Node_ComponentBoundEvent_0_OnValueCommitted__DelegateSignature");
		
		UBP_VideoSettings_C_BndEvt__OptionsGamma_K2Node_ComponentBoundEvent_0_OnValueCommitted__DelegateSignature_Params params {};
		params.NewValue = NewValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.OnAdvancedOptionHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoveredTitle                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        HoveredDescription                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UBP_OptionsRow_BaseClass_C*                  OptionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::OnAdvancedOptionHovered(const class FText& HoveredTitle, const class FText& HoveredDescription, class UBP_OptionsRow_BaseClass_C* OptionWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.OnAdvancedOptionHovered");
		
		UBP_VideoSettings_C_OnAdvancedOptionHovered_Params params {};
		params.HoveredTitle = HoveredTitle;
		params.HoveredDescription = HoveredDescription;
		params.OptionWidget = OptionWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsFrameLimiter_K2Node_ComponentBoundEvent_28_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Console_Variable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::BndEvt__OptionsFrameLimiter_K2Node_ComponentBoundEvent_28_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsFrameLimiter_K2Node_ComponentBoundEvent_28_OnOptionSelected__DelegateSignature");
		
		UBP_VideoSettings_C_BndEvt__OptionsFrameLimiter_K2Node_ComponentBoundEvent_28_OnOptionSelected__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BlueprintRefreshSettings
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_VideoSettings_C::BlueprintRefreshSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BlueprintRefreshSettings");
		
		UBP_VideoSettings_C_BlueprintRefreshSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionViewDistanceQuality_K2Node_ComponentBoundEvent_31_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Console_Variable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::BndEvt__OptionViewDistanceQuality_K2Node_ComponentBoundEvent_31_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionViewDistanceQuality_K2Node_ComponentBoundEvent_31_OnOptionSelected__DelegateSignature");
		
		UBP_VideoSettings_C_BndEvt__OptionViewDistanceQuality_K2Node_ComponentBoundEvent_31_OnOptionSelected__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsSuperSampling_K2Node_ComponentBoundEvent_36_OnValueCommitted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::BndEvt__OptionsSuperSampling_K2Node_ComponentBoundEvent_36_OnValueCommitted__DelegateSignature(float NewValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsSuperSampling_K2Node_ComponentBoundEvent_36_OnValueCommitted__DelegateSignature");
		
		UBP_VideoSettings_C_BndEvt__OptionsSuperSampling_K2Node_ComponentBoundEvent_36_OnValueCommitted__DelegateSignature_Params params {};
		params.NewValue = NewValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.OnOptionHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UBP_OptionsRow_BaseClass_C*                  OptionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::OnOptionHovered(const class FText& Title, const class FText& Description, class UBP_OptionsRow_BaseClass_C* OptionWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.OnOptionHovered");
		
		UBP_VideoSettings_C_OnOptionHovered_Params params {};
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
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.OnSliderValueChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::OnSliderValueChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.OnSliderValueChanged");
		
		UBP_VideoSettings_C_OnSliderValueChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_VideoSettings.BP_VideoSettings_C.ExecuteUbergraph_BP_VideoSettings
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VideoSettings_C::ExecuteUbergraph_BP_VideoSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VideoSettings.BP_VideoSettings_C.ExecuteUbergraph_BP_VideoSettings");
		
		UBP_VideoSettings_C_ExecuteUbergraph_BP_VideoSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_VideoSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_VideoSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_VideoSettings.BP_VideoSettings_C");
		return ptr;
	}

}


