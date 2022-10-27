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
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.UpdatePlayerHeadingVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameSettings_C::UpdatePlayerHeadingVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.UpdatePlayerHeadingVisibility");
		
		UBP_GameSettings_C_UpdatePlayerHeadingVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.HideOptionsByFlags
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameSettings_C::HideOptionsByFlags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.HideOptionsByFlags");
		
		UBP_GameSettings_C_HideOptionsByFlags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.PopulateScoreboardBadges
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameSettings_C::PopulateScoreboardBadges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.PopulateScoreboardBadges");
		
		UBP_GameSettings_C_PopulateScoreboardBadges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.UpdateScoreboardBadgeOptionVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameSettings_C::UpdateScoreboardBadgeOptionVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.UpdateScoreboardBadgeOptionVisibility");
		
		UBP_GameSettings_C_UpdateScoreboardBadgeOptionVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.ChangeDescriptionOnPS4
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameSettings_C::ChangeDescriptionOnPS4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ChangeDescriptionOnPS4");
		
		UBP_GameSettings_C_ChangeDescriptionOnPS4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.HideDebugOptionsOnConsole
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameSettings_C::HideDebugOptionsOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.HideDebugOptionsOnConsole");
		
		UBP_GameSettings_C_HideDebugOptionsOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.Update Highlights Option Visibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameSettings_C::Update_Highlights_Option_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Update Highlights Option Visibility");
		
		UBP_GameSettings_C_Update_Highlights_Option_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.GetProfanityFilterVisibilityOnConsoles
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_GameSettings_C::GetProfanityFilterVisibilityOnConsoles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.GetProfanityFilterVisibilityOnConsoles");
		
		UBP_GameSettings_C_GetProfanityFilterVisibilityOnConsoles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.GetCollapsedVisibilityOnConsoles
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_GameSettings_C::GetCollapsedVisibilityOnConsoles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.GetCollapsedVisibilityOnConsoles");
		
		UBP_GameSettings_C_GetCollapsedVisibilityOnConsoles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.HideReplaysTextOnConsole
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameSettings_C::HideReplaysTextOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.HideReplaysTextOnConsole");
		
		UBP_GameSettings_C_HideReplaysTextOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.ScrollToFocusedWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameSettings_C::ScrollToFocusedWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ScrollToFocusedWidget");
		
		UBP_GameSettings_C_ScrollToFocusedWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_GameSettings_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.OnFocusReceived");
		
		UBP_GameSettings_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.SetUIFromColorScheme
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FColorScheme                                ColorScheme                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_GameSettings_C::SetUIFromColorScheme(const struct FColorScheme& ColorScheme)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.SetUIFromColorScheme");
		
		UBP_GameSettings_C_SetUIFromColorScheme_Params params {};
		params.ColorScheme = ColorScheme;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.ShowHoveredInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoveredTitle                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        HoveredDescription                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_GameSettings_C::ShowHoveredInfo(const class FText& HoveredTitle, const class FText& HoveredDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ShowHoveredInfo");
		
		UBP_GameSettings_C_ShowHoveredInfo_Params params {};
		params.HoveredTitle = HoveredTitle;
		params.HoveredDescription = HoveredDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.OnCustomizeColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameSettings_C::OnCustomizeColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.OnCustomizeColor");
		
		UBP_GameSettings_C_OnCustomizeColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.ApplyColorScheme
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SchemeIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameSettings_C::ApplyColorScheme(int32_t SchemeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ApplyColorScheme");
		
		UBP_GameSettings_C_ApplyColorScheme_Params params {};
		params.SchemeIndex = SchemeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.Get_BtnSaveChanges_bIsEnabled_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_GameSettings_C::Get_BtnSaveChanges_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get_BtnSaveChanges_bIsEnabled_1");
		
		UBP_GameSettings_C_Get_BtnSaveChanges_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.PopulateOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameSettings_C::PopulateOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.PopulateOptions");
		
		UBP_GameSettings_C_PopulateOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.OnTabSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameSettings_C::OnTabSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.OnTabSelected");
		
		UBP_GameSettings_C_OnTabSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_GameSettings_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Construct");
		
		UBP_GameSettings_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.OnGameUserSettingsUINeedsUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameSettings_C::OnGameUserSettingsUINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.OnGameUserSettingsUINeedsUpdate");
		
		UBP_GameSettings_C_OnGameUserSettingsUINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.BlueprintResetToDefaults
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_GameSettings_C::BlueprintResetToDefaults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.BlueprintResetToDefaults");
		
		UBP_GameSettings_C_BlueprintResetToDefaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionColorScheme_K2Node_ComponentBoundEvent_6_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Console_Variable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameSettings_C::BndEvt__OptionColorScheme_K2Node_ComponentBoundEvent_6_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionColorScheme_K2Node_ComponentBoundEvent_6_OnOptionSelected__DelegateSignature");
		
		UBP_GameSettings_C_BndEvt__OptionColorScheme_K2Node_ComponentBoundEvent_6_OnOptionSelected__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionFriendlyTeamColor_K2Node_ComponentBoundEvent_14_OnValueCommitted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateColor                                 NewColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameSettings_C::BndEvt__OptionFriendlyTeamColor_K2Node_ComponentBoundEvent_14_OnValueCommitted__DelegateSignature(const struct FSlateColor& NewColor, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionFriendlyTeamColor_K2Node_ComponentBoundEvent_14_OnValueCommitted__DelegateSignature");
		
		UBP_GameSettings_C_BndEvt__OptionFriendlyTeamColor_K2Node_ComponentBoundEvent_14_OnValueCommitted__DelegateSignature_Params params {};
		params.NewColor = NewColor;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionEnemyTeamColor_K2Node_ComponentBoundEvent_17_OnValueCommitted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateColor                                 NewColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameSettings_C::BndEvt__OptionEnemyTeamColor_K2Node_ComponentBoundEvent_17_OnValueCommitted__DelegateSignature(const struct FSlateColor& NewColor, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionEnemyTeamColor_K2Node_ComponentBoundEvent_17_OnValueCommitted__DelegateSignature");
		
		UBP_GameSettings_C_BndEvt__OptionEnemyTeamColor_K2Node_ComponentBoundEvent_17_OnValueCommitted__DelegateSignature_Params params {};
		params.NewColor = NewColor;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionNeutralColor_K2Node_ComponentBoundEvent_18_OnValueCommitted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateColor                                 NewColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameSettings_C::BndEvt__OptionNeutralColor_K2Node_ComponentBoundEvent_18_OnValueCommitted__DelegateSignature(const struct FSlateColor& NewColor, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionNeutralColor_K2Node_ComponentBoundEvent_18_OnValueCommitted__DelegateSignature");
		
		UBP_GameSettings_C_BndEvt__OptionNeutralColor_K2Node_ComponentBoundEvent_18_OnValueCommitted__DelegateSignature_Params params {};
		params.NewColor = NewColor;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionBuddyColor_K2Node_ComponentBoundEvent_3_OnValueCommitted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateColor                                 NewColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameSettings_C::BndEvt__OptionBuddyColor_K2Node_ComponentBoundEvent_3_OnValueCommitted__DelegateSignature(const struct FSlateColor& NewColor, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionBuddyColor_K2Node_ComponentBoundEvent_3_OnValueCommitted__DelegateSignature");
		
		UBP_GameSettings_C_BndEvt__OptionBuddyColor_K2Node_ComponentBoundEvent_3_OnValueCommitted__DelegateSignature_Params params {};
		params.NewColor = NewColor;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionsCommanderObserverColor_K2Node_ComponentBoundEvent_83_OnValueCommitted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateColor                                 NewColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameSettings_C::BndEvt__OptionsCommanderObserverColor_K2Node_ComponentBoundEvent_83_OnValueCommitted__DelegateSignature(const struct FSlateColor& NewColor, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionsCommanderObserverColor_K2Node_ComponentBoundEvent_83_OnValueCommitted__DelegateSignature");
		
		UBP_GameSettings_C_BndEvt__OptionsCommanderObserverColor_K2Node_ComponentBoundEvent_83_OnValueCommitted__DelegateSignature_Params params {};
		params.NewColor = NewColor;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.BlueprintApplyChanges
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_GameSettings_C::BlueprintApplyChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.BlueprintApplyChanges");
		
		UBP_GameSettings_C_BlueprintApplyChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.ApplyColors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameSettings_C::ApplyColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ApplyColors");
		
		UBP_GameSettings_C_ApplyColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.BlueprintRefreshSettings
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_GameSettings_C::BlueprintRefreshSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.BlueprintRefreshSettings");
		
		UBP_GameSettings_C_BlueprintRefreshSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionSpectatorXrayTrails_K2Node_ComponentBoundEvent_90_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_GameSettings_C::BndEvt__OptionSpectatorXrayTrails_K2Node_ComponentBoundEvent_90_OnOptionSelected__DelegateSignature(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionSpectatorXrayTrails_K2Node_ComponentBoundEvent_90_OnOptionSelected__DelegateSignature");
		
		UBP_GameSettings_C_BndEvt__OptionSpectatorXrayTrails_K2Node_ComponentBoundEvent_90_OnOptionSelected__DelegateSignature_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionLanguages_K2Node_ComponentBoundEvent_100_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_GameSettings_C::BndEvt__OptionLanguages_K2Node_ComponentBoundEvent_100_OnOptionSelected__DelegateSignature(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionLanguages_K2Node_ComponentBoundEvent_100_OnOptionSelected__DelegateSignature");
		
		UBP_GameSettings_C_BndEvt__OptionLanguages_K2Node_ComponentBoundEvent_100_OnOptionSelected__DelegateSignature_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.OnOptionHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UBP_OptionsRow_BaseClass_C*                  OptionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameSettings_C::OnOptionHovered(const class FText& Title, const class FText& Description, class UBP_OptionsRow_BaseClass_C* OptionWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.OnOptionHovered");
		
		UBP_GameSettings_C_OnOptionHovered_Params params {};
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
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.OnOptionModified
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_OptionsRow_BaseClass_C*                  OptionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameSettings_C::OnOptionModified(class UBP_OptionsRow_BaseClass_C* OptionWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.OnOptionModified");
		
		UBP_GameSettings_C_OnOptionModified_Params params {};
		params.OptionWidget = OptionWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.OnEntitlementsUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameSettings_C::OnEntitlementsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.OnEntitlementsUpdated");
		
		UBP_GameSettings_C_OnEntitlementsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionContextualKeyHints_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_GameSettings_C::BndEvt__OptionContextualKeyHints_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionContextualKeyHints_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature");
		
		UBP_GameSettings_C_BndEvt__OptionContextualKeyHints_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.OnSliderValueChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameSettings_C::OnSliderValueChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.OnSliderValueChanged");
		
		UBP_GameSettings_C_OnSliderValueChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionPartyColor_K2Node_ComponentBoundEvent_1_OnValueCommitted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateColor                                 NewColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameSettings_C::BndEvt__OptionPartyColor_K2Node_ComponentBoundEvent_1_OnValueCommitted__DelegateSignature(const struct FSlateColor& NewColor, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.BndEvt__OptionPartyColor_K2Node_ComponentBoundEvent_1_OnValueCommitted__DelegateSignature");
		
		UBP_GameSettings_C_BndEvt__OptionPartyColor_K2Node_ComponentBoundEvent_1_OnValueCommitted__DelegateSignature_Params params {};
		params.NewColor = NewColor;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.ExecuteUbergraph_BP_GameSettings
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameSettings_C::ExecuteUbergraph_BP_GameSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ExecuteUbergraph_BP_GameSettings");
		
		UBP_GameSettings_C_ExecuteUbergraph_BP_GameSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameSettings.BP_GameSettings_C.OnSelectChangeLanguage__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameSettings_C::OnSelectChangeLanguage__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.OnSelectChangeLanguage__DelegateSignature");
		
		UBP_GameSettings_C_OnSelectChangeLanguage__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_GameSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_GameSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_GameSettings.BP_GameSettings_C");
		return ptr;
	}

}


