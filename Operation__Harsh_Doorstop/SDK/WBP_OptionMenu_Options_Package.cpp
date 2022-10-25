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
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.GetDesiredVerticalAlignment
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EVerticalAlignment                                 Alignment                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::GetDesiredVerticalAlignment(EVerticalAlignment* Alignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.GetDesiredVerticalAlignment");
		
		UWBP_OptionMenu_Options_C_GetDesiredVerticalAlignment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Alignment != nullptr)
			*Alignment = params.Alignment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.GetDesiredHorizontalAlignment
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHorizontalAlignment                               Alignment                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::GetDesiredHorizontalAlignment(EHorizontalAlignment* Alignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.GetDesiredHorizontalAlignment");
		
		UWBP_OptionMenu_Options_C_GetDesiredHorizontalAlignment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Alignment != nullptr)
			*Alignment = params.Alignment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.HasSubMenus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSubMenuOptions                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Options_C::HasSubMenus(bool* bSubMenuOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.HasSubMenus");
		
		UWBP_OptionMenu_Options_C_HasSubMenus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSubMenuOptions != nullptr)
			*bSubMenuOptions = params.bSubMenuOptions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.GetSubMenuOptions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFSubMenuOption>                     SubOptions                                                 (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::GetSubMenuOptions(TArray<struct FFSubMenuOption>* SubOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.GetSubMenuOptions");
		
		UWBP_OptionMenu_Options_C_GetSubMenuOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubOptions != nullptr)
			*SubOptions = params.SubOptions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.StartSelectingKey
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_OptionsMenuItem_InputKeySelector_C*     IKS                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::StartSelectingKey(class UWBP_OptionsMenuItem_InputKeySelector_C* IKS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.StartSelectingKey");
		
		UWBP_OptionMenu_Options_C_StartSelectingKey_Params params {};
		params.IKS = IKS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.CatchMouseWheelInput
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewScrollOffset                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::CatchMouseWheelInput(float NewScrollOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.CatchMouseWheelInput");
		
		UWBP_OptionMenu_Options_C_CatchMouseWheelInput_Params params {};
		params.NewScrollOffset = NewScrollOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetCurrentIKS
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_OptionsMenuItem_InputKeySelector_C*     IKS                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::SetCurrentIKS(class UWBP_OptionsMenuItem_InputKeySelector_C* IKS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetCurrentIKS");
		
		UWBP_OptionMenu_Options_C_SetCurrentIKS_Params params {};
		params.IKS = IKS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshControlsOptionUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::RefreshControlsOptionUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshControlsOptionUI");
		
		UWBP_OptionMenu_Options_C_RefreshControlsOptionUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.Update Key Binding
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_OptionsMenuItem_InputKeySelector_C*     IKS                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInputChord                                 NewInputChord                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::Update_Key_Binding(class UWBP_OptionsMenuItem_InputKeySelector_C* IKS, const struct FInputChord& NewInputChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.Update Key Binding");
		
		UWBP_OptionMenu_Options_C_Update_Key_Binding_Params params {};
		params.IKS = IKS;
		params.NewInputChord = NewInputChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.PopulateAllKeyBindings
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::PopulateAllKeyBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.PopulateAllKeyBindings");
		
		UWBP_OptionMenu_Options_C_PopulateAllKeyBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetupControlsOptionUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::SetupControlsOptionUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetupControlsOptionUI");
		
		UWBP_OptionMenu_Options_C_SetupControlsOptionUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.GetMaxSecondaryVolumeLevel
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              MaxVolLvl                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::GetMaxSecondaryVolumeLevel(float* MaxVolLvl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.GetMaxSecondaryVolumeLevel");
		
		UWBP_OptionMenu_Options_C_GetMaxSecondaryVolumeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxVolLvl != nullptr)
			*MaxVolLvl = params.MaxVolLvl;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.GetBalancedSecondaryVolumeLevel
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              VolumeLevelToBalance                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bMatchMasterVolLvl                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              VolLevelBalanced                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::GetBalancedSecondaryVolumeLevel(float VolumeLevelToBalance, bool bMatchMasterVolLvl, float* VolLevelBalanced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.GetBalancedSecondaryVolumeLevel");
		
		UWBP_OptionMenu_Options_C_GetBalancedSecondaryVolumeLevel_Params params {};
		params.VolumeLevelToBalance = VolumeLevelToBalance;
		params.bMatchMasterVolLvl = bMatchMasterVolLvl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VolLevelBalanced != nullptr)
			*VolLevelBalanced = params.VolLevelBalanced;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BalanceSecondaryVolumeLevels
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bMatchMasterVolLvl                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRefreshAudioUI                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Options_C::BalanceSecondaryVolumeLevels(bool bMatchMasterVolLvl, bool bRefreshAudioUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BalanceSecondaryVolumeLevels");
		
		UWBP_OptionMenu_Options_C_BalanceSecondaryVolumeLevels_Params params {};
		params.bMatchMasterVolLvl = bMatchMasterVolLvl;
		params.bRefreshAudioUI = bRefreshAudioUI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BalanceMasterVolumeLevel
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bRefreshAudioUI                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Options_C::BalanceMasterVolumeLevel(bool bRefreshAudioUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BalanceMasterVolumeLevel");
		
		UWBP_OptionMenu_Options_C_BalanceMasterVolumeLevel_Params params {};
		params.bRefreshAudioUI = bRefreshAudioUI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BalanceVolumeLevels
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bRefreshAudioUI                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Options_C::BalanceVolumeLevels(bool bRefreshAudioUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BalanceVolumeLevels");
		
		UWBP_OptionMenu_Options_C_BalanceVolumeLevels_Params params {};
		params.bRefreshAudioUI = bRefreshAudioUI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshAudioOptionUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::RefreshAudioOptionUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshAudioOptionUI");
		
		UWBP_OptionMenu_Options_C_RefreshAudioOptionUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.UpdateScreenResolutionState
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::UpdateScreenResolutionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.UpdateScreenResolutionState");
		
		UWBP_OptionMenu_Options_C_UpdateScreenResolutionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetResolutionScaleBounds
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::SetResolutionScaleBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetResolutionScaleBounds");
		
		UWBP_OptionMenu_Options_C_SetResolutionScaleBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.UpdateUnsavedStatus
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::UpdateUnsavedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.UpdateUnsavedStatus");
		
		UWBP_OptionMenu_Options_C_UpdateUnsavedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RegisterClickEventsForContainer
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPanelWidget*                                Container                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::RegisterClickEventsForContainer(class UPanelWidget* Container)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RegisterClickEventsForContainer");
		
		UWBP_OptionMenu_Options_C_RegisterClickEventsForContainer_Params params {};
		params.Container = Container;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetupOptionSelectionEvents
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::SetupOptionSelectionEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetupOptionSelectionEvents");
		
		UWBP_OptionMenu_Options_C_SetupOptionSelectionEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshQualityOptions
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::RefreshQualityOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshQualityOptions");
		
		UWBP_OptionMenu_Options_C_RefreshQualityOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshOverallQualityOption
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::RefreshOverallQualityOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshOverallQualityOption");
		
		UWBP_OptionMenu_Options_C_RefreshOverallQualityOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetScreenResolutionSetting
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ScreenResolution                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::SetScreenResolutionSetting(const class FString& ScreenResolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetScreenResolutionSetting");
		
		UWBP_OptionMenu_Options_C_SetScreenResolutionSetting_Params params {};
		params.ScreenResolution = ScreenResolution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetupVideoOptionUI
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::SetupVideoOptionUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetupVideoOptionUI");
		
		UWBP_OptionMenu_Options_C_SetupVideoOptionUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.PopulateScreenResolutionOption
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::PopulateScreenResolutionOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.PopulateScreenResolutionOption");
		
		UWBP_OptionMenu_Options_C_PopulateScreenResolutionOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshVideoOptionUI
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::RefreshVideoOptionUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshVideoOptionUI");
		
		UWBP_OptionMenu_Options_C_RefreshVideoOptionUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.IsDirty
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bDirty                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Options_C::IsDirty(bool* bDirty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.IsDirty");
		
		UWBP_OptionMenu_Options_C_IsDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDirty != nullptr)
			*bDirty = params.bDirty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshGameplayOptionUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::RefreshGameplayOptionUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshGameplayOptionUI");
		
		UWBP_OptionMenu_Options_C_RefreshGameplayOptionUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetupGameplayOptionUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::SetupGameplayOptionUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetupGameplayOptionUI");
		
		UWBP_OptionMenu_Options_C_SetupGameplayOptionUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetupAllOptionUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::SetupAllOptionUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetupAllOptionUI");
		
		UWBP_OptionMenu_Options_C_SetupAllOptionUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshAllOptionUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::RefreshAllOptionUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.RefreshAllOptionUI");
		
		UWBP_OptionMenu_Options_C_RefreshAllOptionUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnNavOptionSelected
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_TextButton_C*                           NavBtn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::OnNavOptionSelected(class UWBP_TextButton_C* NavBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnNavOptionSelected");
		
		UWBP_OptionMenu_Options_C_OnNavOptionSelected_Params params {};
		params.NavBtn = NavBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetMenuIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::SetMenuIndex(int32_t NewIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetMenuIndex");
		
		UWBP_OptionMenu_Options_C_SetMenuIndex_Params params {};
		params.NewIndex = NewIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.Destruct");
		
		UWBP_OptionMenu_Options_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__GameplayBtn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__GameplayBtn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__GameplayBtn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__GameplayBtn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__VideoBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__VideoBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__VideoBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__VideoBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AudioBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__AudioBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AudioBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__AudioBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ControlsBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__ControlsBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ControlsBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__ControlsBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnOptionsUINeedsUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::OnOptionsUINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnOptionsUINeedsUpdate");
		
		UWBP_OptionMenu_Options_C_OnOptionsUINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.Construct");
		
		UWBP_OptionMenu_Options_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__DisplayModeOption_K2Node_ComponentBoundEvent_6_OnSelectionChangedByUser__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItemValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__DisplayModeOption_K2Node_ComponentBoundEvent_6_OnSelectionChangedByUser__DelegateSignature(const class FString& SelectedItemValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__DisplayModeOption_K2Node_ComponentBoundEvent_6_OnSelectionChangedByUser__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__DisplayModeOption_K2Node_ComponentBoundEvent_6_OnSelectionChangedByUser__DelegateSignature_Params params {};
		params.SelectedItemValue = SelectedItemValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ScreenResolutionOption_K2Node_ComponentBoundEvent_7_OnSelectionChangedByUser__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItemValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__ScreenResolutionOption_K2Node_ComponentBoundEvent_7_OnSelectionChangedByUser__DelegateSignature(const class FString& SelectedItemValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ScreenResolutionOption_K2Node_ComponentBoundEvent_7_OnSelectionChangedByUser__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__ScreenResolutionOption_K2Node_ComponentBoundEvent_7_OnSelectionChangedByUser__DelegateSignature_Params params {};
		params.SelectedItemValue = SelectedItemValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__RestoreDefaultsBtn_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__RestoreDefaultsBtn_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__RestoreDefaultsBtn_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__RestoreDefaultsBtn_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ApplyBtn_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__ApplyBtn_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ApplyBtn_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__ApplyBtn_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Options_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.PreConstruct");
		
		UWBP_OptionMenu_Options_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__VerticalSyncOption_K2Node_ComponentBoundEvent_10_CheckStateChangedBool__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bChecked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__VerticalSyncOption_K2Node_ComponentBoundEvent_10_CheckStateChangedBool__DelegateSignature(bool bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__VerticalSyncOption_K2Node_ComponentBoundEvent_10_CheckStateChangedBool__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__VerticalSyncOption_K2Node_ComponentBoundEvent_10_CheckStateChangedBool__DelegateSignature_Params params {};
		params.bChecked = bChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__OverallQualityOption_K2Node_ComponentBoundEvent_11_OnSelectionChangedByUser__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItemValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__OverallQualityOption_K2Node_ComponentBoundEvent_11_OnSelectionChangedByUser__DelegateSignature(const class FString& SelectedItemValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__OverallQualityOption_K2Node_ComponentBoundEvent_11_OnSelectionChangedByUser__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__OverallQualityOption_K2Node_ComponentBoundEvent_11_OnSelectionChangedByUser__DelegateSignature_Params params {};
		params.SelectedItemValue = SelectedItemValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ViewDistanceOption_K2Node_ComponentBoundEvent_12_OnSelectionChangedByUser__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItemValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__ViewDistanceOption_K2Node_ComponentBoundEvent_12_OnSelectionChangedByUser__DelegateSignature(const class FString& SelectedItemValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ViewDistanceOption_K2Node_ComponentBoundEvent_12_OnSelectionChangedByUser__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__ViewDistanceOption_K2Node_ComponentBoundEvent_12_OnSelectionChangedByUser__DelegateSignature_Params params {};
		params.SelectedItemValue = SelectedItemValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AAOption_K2Node_ComponentBoundEvent_13_OnSelectionChangedByUser__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItemValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__AAOption_K2Node_ComponentBoundEvent_13_OnSelectionChangedByUser__DelegateSignature(const class FString& SelectedItemValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AAOption_K2Node_ComponentBoundEvent_13_OnSelectionChangedByUser__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__AAOption_K2Node_ComponentBoundEvent_13_OnSelectionChangedByUser__DelegateSignature_Params params {};
		params.SelectedItemValue = SelectedItemValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PPOption_K2Node_ComponentBoundEvent_14_OnSelectionChangedByUser__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItemValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__PPOption_K2Node_ComponentBoundEvent_14_OnSelectionChangedByUser__DelegateSignature(const class FString& SelectedItemValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PPOption_K2Node_ComponentBoundEvent_14_OnSelectionChangedByUser__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__PPOption_K2Node_ComponentBoundEvent_14_OnSelectionChangedByUser__DelegateSignature_Params params {};
		params.SelectedItemValue = SelectedItemValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ShadowOption_K2Node_ComponentBoundEvent_15_OnSelectionChangedByUser__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItemValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__ShadowOption_K2Node_ComponentBoundEvent_15_OnSelectionChangedByUser__DelegateSignature(const class FString& SelectedItemValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ShadowOption_K2Node_ComponentBoundEvent_15_OnSelectionChangedByUser__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__ShadowOption_K2Node_ComponentBoundEvent_15_OnSelectionChangedByUser__DelegateSignature_Params params {};
		params.SelectedItemValue = SelectedItemValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__TextureOption_K2Node_ComponentBoundEvent_16_OnSelectionChangedByUser__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItemValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__TextureOption_K2Node_ComponentBoundEvent_16_OnSelectionChangedByUser__DelegateSignature(const class FString& SelectedItemValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__TextureOption_K2Node_ComponentBoundEvent_16_OnSelectionChangedByUser__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__TextureOption_K2Node_ComponentBoundEvent_16_OnSelectionChangedByUser__DelegateSignature_Params params {};
		params.SelectedItemValue = SelectedItemValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__EffectsOption_K2Node_ComponentBoundEvent_17_OnSelectionChangedByUser__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItemValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__EffectsOption_K2Node_ComponentBoundEvent_17_OnSelectionChangedByUser__DelegateSignature(const class FString& SelectedItemValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__EffectsOption_K2Node_ComponentBoundEvent_17_OnSelectionChangedByUser__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__EffectsOption_K2Node_ComponentBoundEvent_17_OnSelectionChangedByUser__DelegateSignature_Params params {};
		params.SelectedItemValue = SelectedItemValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__FoliageOption_K2Node_ComponentBoundEvent_18_OnSelectionChangedByUser__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItemValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__FoliageOption_K2Node_ComponentBoundEvent_18_OnSelectionChangedByUser__DelegateSignature(const class FString& SelectedItemValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__FoliageOption_K2Node_ComponentBoundEvent_18_OnSelectionChangedByUser__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__FoliageOption_K2Node_ComponentBoundEvent_18_OnSelectionChangedByUser__DelegateSignature_Params params {};
		params.SelectedItemValue = SelectedItemValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnArrowMenuSelectionChangedUser
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItemValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::OnArrowMenuSelectionChangedUser(const class FString& SelectedItemValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnArrowMenuSelectionChangedUser");
		
		UWBP_OptionMenu_Options_C_OnArrowMenuSelectionChangedUser_Params params {};
		params.SelectedItemValue = SelectedItemValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnCheckboxMenuCheckStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bChecked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Options_C::OnCheckboxMenuCheckStateChanged(bool bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnCheckboxMenuCheckStateChanged");
		
		UWBP_OptionMenu_Options_C_OnCheckboxMenuCheckStateChanged_Params params {};
		params.bChecked = bChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetActiveSubMenuByIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SubMenuIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::SetActiveSubMenuByIndex(int32_t SubMenuIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.SetActiveSubMenuByIndex");
		
		UWBP_OptionMenu_Options_C_SetActiveSubMenuByIndex_Params params {};
		params.SubMenuIndex = SubMenuIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnSliderMenuValueChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::OnSliderMenuValueChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnSliderMenuValueChanged");
		
		UWBP_OptionMenu_Options_C_OnSliderMenuValueChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnToggleMenuToggleStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bToggledOn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Options_C::OnToggleMenuToggleStateChanged(bool bToggledOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnToggleMenuToggleStateChanged");
		
		UWBP_OptionMenu_Options_C_OnToggleMenuToggleStateChanged_Params params {};
		params.bToggledOn = bToggledOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ResolutionScaleOption_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__ResolutionScaleOption_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ResolutionScaleOption_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__ResolutionScaleOption_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SmoothFrameRateOption_K2Node_ComponentBoundEvent_20_CheckStateChangedBool__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bChecked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__SmoothFrameRateOption_K2Node_ComponentBoundEvent_20_CheckStateChangedBool__DelegateSignature(bool bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SmoothFrameRateOption_K2Node_ComponentBoundEvent_20_CheckStateChangedBool__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__SmoothFrameRateOption_K2Node_ComponentBoundEvent_20_CheckStateChangedBool__DelegateSignature_Params params {};
		params.bChecked = bChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__FrameRateLimitOption_K2Node_ComponentBoundEvent_19_ValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__FrameRateLimitOption_K2Node_ComponentBoundEvent_19_ValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__FrameRateLimitOption_K2Node_ComponentBoundEvent_19_ValueChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__FrameRateLimitOption_K2Node_ComponentBoundEvent_19_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__DiscardChangesBtn_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__DiscardChangesBtn_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__DiscardChangesBtn_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__DiscardChangesBtn_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__GlobalMouseSensitivityOption_K2Node_ComponentBoundEvent_22_ValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__GlobalMouseSensitivityOption_K2Node_ComponentBoundEvent_22_ValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__GlobalMouseSensitivityOption_K2Node_ComponentBoundEvent_22_ValueChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__GlobalMouseSensitivityOption_K2Node_ComponentBoundEvent_22_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__InvertMousePitchOption_K2Node_ComponentBoundEvent_23_CheckStateChangedBool__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bChecked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__InvertMousePitchOption_K2Node_ComponentBoundEvent_23_CheckStateChangedBool__DelegateSignature(bool bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__InvertMousePitchOption_K2Node_ComponentBoundEvent_23_CheckStateChangedBool__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__InvertMousePitchOption_K2Node_ComponentBoundEvent_23_CheckStateChangedBool__DelegateSignature_Params params {};
		params.bChecked = bChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SmoothMouseOption_K2Node_ComponentBoundEvent_24_CheckStateChangedBool__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bChecked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__SmoothMouseOption_K2Node_ComponentBoundEvent_24_CheckStateChangedBool__DelegateSignature(bool bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SmoothMouseOption_K2Node_ComponentBoundEvent_24_CheckStateChangedBool__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__SmoothMouseOption_K2Node_ComponentBoundEvent_24_CheckStateChangedBool__DelegateSignature_Params params {};
		params.bChecked = bChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__DisplayGammaOption_K2Node_ComponentBoundEvent_25_ValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__DisplayGammaOption_K2Node_ComponentBoundEvent_25_ValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__DisplayGammaOption_K2Node_ComponentBoundEvent_25_ValueChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__DisplayGammaOption_K2Node_ComponentBoundEvent_25_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__FOVOption_K2Node_ComponentBoundEvent_26_ValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__FOVOption_K2Node_ComponentBoundEvent_26_ValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__FOVOption_K2Node_ComponentBoundEvent_26_ValueChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__FOVOption_K2Node_ComponentBoundEvent_26_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AudioQualityOption_K2Node_ComponentBoundEvent_27_OnSelectionChangedByUser__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItemValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__AudioQualityOption_K2Node_ComponentBoundEvent_27_OnSelectionChangedByUser__DelegateSignature(const class FString& SelectedItemValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AudioQualityOption_K2Node_ComponentBoundEvent_27_OnSelectionChangedByUser__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__AudioQualityOption_K2Node_ComponentBoundEvent_27_OnSelectionChangedByUser__DelegateSignature_Params params {};
		params.SelectedItemValue = SelectedItemValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__HeadphoneModeOption_K2Node_ComponentBoundEvent_28_CheckStateChangedBool__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bChecked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__HeadphoneModeOption_K2Node_ComponentBoundEvent_28_CheckStateChangedBool__DelegateSignature(bool bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__HeadphoneModeOption_K2Node_ComponentBoundEvent_28_CheckStateChangedBool__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__HeadphoneModeOption_K2Node_ComponentBoundEvent_28_CheckStateChangedBool__DelegateSignature_Params params {};
		params.bChecked = bChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MasterVolOption_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__MasterVolOption_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MasterVolOption_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__MasterVolOption_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SFXVolOption_K2Node_ComponentBoundEvent_29_ValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__SFXVolOption_K2Node_ComponentBoundEvent_29_ValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SFXVolOption_K2Node_ComponentBoundEvent_29_ValueChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__SFXVolOption_K2Node_ComponentBoundEvent_29_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MusicVolOption_K2Node_ComponentBoundEvent_30_ValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__MusicVolOption_K2Node_ComponentBoundEvent_30_ValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MusicVolOption_K2Node_ComponentBoundEvent_30_ValueChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__MusicVolOption_K2Node_ComponentBoundEvent_30_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__VOVolOption_K2Node_ComponentBoundEvent_31_ValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__VOVolOption_K2Node_ComponentBoundEvent_31_ValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__VOVolOption_K2Node_ComponentBoundEvent_31_ValueChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__VOVolOption_K2Node_ComponentBoundEvent_31_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__VOIPVolOption_K2Node_ComponentBoundEvent_32_ValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__VOIPVolOption_K2Node_ComponentBoundEvent_32_ValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__VOIPVolOption_K2Node_ComponentBoundEvent_32_ValueChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__VOIPVolOption_K2Node_ComponentBoundEvent_32_ValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ShadingOption_K2Node_ComponentBoundEvent_33_OnSelectionChangedByUser__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItemValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__ShadingOption_K2Node_ComponentBoundEvent_33_OnSelectionChangedByUser__DelegateSignature(const class FString& SelectedItemValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__ShadingOption_K2Node_ComponentBoundEvent_33_OnSelectionChangedByUser__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__ShadingOption_K2Node_ComponentBoundEvent_33_OnSelectionChangedByUser__DelegateSignature_Params params {};
		params.SelectedItemValue = SelectedItemValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AllowSoundInBgOption_K2Node_ComponentBoundEvent_34_CheckStateChangedBool__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bChecked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__AllowSoundInBgOption_K2Node_ComponentBoundEvent_34_CheckStateChangedBool__DelegateSignature(bool bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AllowSoundInBgOption_K2Node_ComponentBoundEvent_34_CheckStateChangedBool__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__AllowSoundInBgOption_K2Node_ComponentBoundEvent_34_CheckStateChangedBool__DelegateSignature_Params params {};
		params.bChecked = bChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MotionBlurOption_K2Node_ComponentBoundEvent_35_CheckStateChangedBool__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bChecked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__MotionBlurOption_K2Node_ComponentBoundEvent_35_CheckStateChangedBool__DelegateSignature(bool bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MotionBlurOption_K2Node_ComponentBoundEvent_35_CheckStateChangedBool__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__MotionBlurOption_K2Node_ComponentBoundEvent_35_CheckStateChangedBool__DelegateSignature_Params params {};
		params.bChecked = bChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveForward_IKS_K2Node_ComponentBoundEvent_36_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__MoveForward_IKS_K2Node_ComponentBoundEvent_36_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveForward_IKS_K2Node_ComponentBoundEvent_36_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__MoveForward_IKS_K2Node_ComponentBoundEvent_36_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveBackward_IKS_K2Node_ComponentBoundEvent_37_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__MoveBackward_IKS_K2Node_ComponentBoundEvent_37_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveBackward_IKS_K2Node_ComponentBoundEvent_37_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__MoveBackward_IKS_K2Node_ComponentBoundEvent_37_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveLeft_IKS_K2Node_ComponentBoundEvent_38_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__MoveLeft_IKS_K2Node_ComponentBoundEvent_38_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveLeft_IKS_K2Node_ComponentBoundEvent_38_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__MoveLeft_IKS_K2Node_ComponentBoundEvent_38_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveRight_IKS_K2Node_ComponentBoundEvent_39_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__MoveRight_IKS_K2Node_ComponentBoundEvent_39_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveRight_IKS_K2Node_ComponentBoundEvent_39_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__MoveRight_IKS_K2Node_ComponentBoundEvent_39_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Sprint_IKS_K2Node_ComponentBoundEvent_40_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__Sprint_IKS_K2Node_ComponentBoundEvent_40_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Sprint_IKS_K2Node_ComponentBoundEvent_40_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__Sprint_IKS_K2Node_ComponentBoundEvent_40_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Crouch_IKS_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__Crouch_IKS_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Crouch_IKS_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__Crouch_IKS_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Jump_IKS_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__Jump_IKS_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Jump_IKS_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__Jump_IKS_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Fire_IKS_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__Fire_IKS_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Fire_IKS_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__Fire_IKS_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Reload_IKS_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__Reload_IKS_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Reload_IKS_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__Reload_IKS_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AimDownSights_IKS_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__AimDownSights_IKS_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AimDownSights_IKS_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__AimDownSights_IKS_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__NextWeapon_IKS_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__NextWeapon_IKS_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__NextWeapon_IKS_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__NextWeapon_IKS_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PreviousWeapon_IKS_K2Node_ComponentBoundEvent_47_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__PreviousWeapon_IKS_K2Node_ComponentBoundEvent_47_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PreviousWeapon_IKS_K2Node_ComponentBoundEvent_47_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__PreviousWeapon_IKS_K2Node_ComponentBoundEvent_47_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot1_IKS_K2Node_ComponentBoundEvent_48_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot1_IKS_K2Node_ComponentBoundEvent_48_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot1_IKS_K2Node_ComponentBoundEvent_48_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot1_IKS_K2Node_ComponentBoundEvent_48_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot2_IKS_K2Node_ComponentBoundEvent_49_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot2_IKS_K2Node_ComponentBoundEvent_49_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot2_IKS_K2Node_ComponentBoundEvent_49_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot2_IKS_K2Node_ComponentBoundEvent_49_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot3_IKS_K2Node_ComponentBoundEvent_50_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot3_IKS_K2Node_ComponentBoundEvent_50_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot3_IKS_K2Node_ComponentBoundEvent_50_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot3_IKS_K2Node_ComponentBoundEvent_50_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot4_IKS_K2Node_ComponentBoundEvent_51_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot4_IKS_K2Node_ComponentBoundEvent_51_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot4_IKS_K2Node_ComponentBoundEvent_51_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot4_IKS_K2Node_ComponentBoundEvent_51_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot5_IKS_K2Node_ComponentBoundEvent_52_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot5_IKS_K2Node_ComponentBoundEvent_52_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot5_IKS_K2Node_ComponentBoundEvent_52_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot5_IKS_K2Node_ComponentBoundEvent_52_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot6_IKS_K2Node_ComponentBoundEvent_53_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot6_IKS_K2Node_ComponentBoundEvent_53_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot6_IKS_K2Node_ComponentBoundEvent_53_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot6_IKS_K2Node_ComponentBoundEvent_53_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot7_IKS_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot7_IKS_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot7_IKS_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot7_IKS_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot8_IKS_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot8_IKS_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot8_IKS_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot8_IKS_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalk_IKS_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__PushToTalk_IKS_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalk_IKS_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__PushToTalk_IKS_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SayAll_IKS_K2Node_ComponentBoundEvent_57_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__SayAll_IKS_K2Node_ComponentBoundEvent_57_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SayAll_IKS_K2Node_ComponentBoundEvent_57_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__SayAll_IKS_K2Node_ComponentBoundEvent_57_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SayTeam_IKS_K2Node_ComponentBoundEvent_58_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__SayTeam_IKS_K2Node_ComponentBoundEvent_58_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SayTeam_IKS_K2Node_ComponentBoundEvent_58_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__SayTeam_IKS_K2Node_ComponentBoundEvent_58_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Use_IKS_K2Node_ComponentBoundEvent_59_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__Use_IKS_K2Node_ComponentBoundEvent_59_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Use_IKS_K2Node_ComponentBoundEvent_59_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__Use_IKS_K2Node_ComponentBoundEvent_59_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Scoreboard_IKS_K2Node_ComponentBoundEvent_60_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__Scoreboard_IKS_K2Node_ComponentBoundEvent_60_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Scoreboard_IKS_K2Node_ComponentBoundEvent_60_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__Scoreboard_IKS_K2Node_ComponentBoundEvent_60_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__DeployMenu_IKS_K2Node_ComponentBoundEvent_61_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__DeployMenu_IKS_K2Node_ComponentBoundEvent_61_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__DeployMenu_IKS_K2Node_ComponentBoundEvent_61_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__DeployMenu_IKS_K2Node_ComponentBoundEvent_61_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__CameraToggle_IKS_K2Node_ComponentBoundEvent_62_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__CameraToggle_IKS_K2Node_ComponentBoundEvent_62_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__CameraToggle_IKS_K2Node_ComponentBoundEvent_62_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__CameraToggle_IKS_K2Node_ComponentBoundEvent_62_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnIKSMenuKeySelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 Key_Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::OnIKSMenuKeySelected(const struct FInputChord& Key_Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.OnIKSMenuKeySelected");
		
		UWBP_OptionMenu_Options_C_OnIKSMenuKeySelected_Params params {};
		params.Key_Selected = Key_Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveForward_IKS_K2Node_ComponentBoundEvent_63_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__MoveForward_IKS_K2Node_ComponentBoundEvent_63_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveForward_IKS_K2Node_ComponentBoundEvent_63_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__MoveForward_IKS_K2Node_ComponentBoundEvent_63_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveLeft_IKS_K2Node_ComponentBoundEvent_65_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__MoveLeft_IKS_K2Node_ComponentBoundEvent_65_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveLeft_IKS_K2Node_ComponentBoundEvent_65_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__MoveLeft_IKS_K2Node_ComponentBoundEvent_65_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveRight_IKS_K2Node_ComponentBoundEvent_66_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__MoveRight_IKS_K2Node_ComponentBoundEvent_66_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveRight_IKS_K2Node_ComponentBoundEvent_66_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__MoveRight_IKS_K2Node_ComponentBoundEvent_66_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Sprint_IKS_K2Node_ComponentBoundEvent_67_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__Sprint_IKS_K2Node_ComponentBoundEvent_67_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Sprint_IKS_K2Node_ComponentBoundEvent_67_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__Sprint_IKS_K2Node_ComponentBoundEvent_67_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Crouch_IKS_K2Node_ComponentBoundEvent_68_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__Crouch_IKS_K2Node_ComponentBoundEvent_68_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Crouch_IKS_K2Node_ComponentBoundEvent_68_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__Crouch_IKS_K2Node_ComponentBoundEvent_68_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Jump_IKS_K2Node_ComponentBoundEvent_69_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__Jump_IKS_K2Node_ComponentBoundEvent_69_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Jump_IKS_K2Node_ComponentBoundEvent_69_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__Jump_IKS_K2Node_ComponentBoundEvent_69_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Fire_IKS_K2Node_ComponentBoundEvent_70_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__Fire_IKS_K2Node_ComponentBoundEvent_70_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Fire_IKS_K2Node_ComponentBoundEvent_70_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__Fire_IKS_K2Node_ComponentBoundEvent_70_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Reload_IKS_K2Node_ComponentBoundEvent_71_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__Reload_IKS_K2Node_ComponentBoundEvent_71_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Reload_IKS_K2Node_ComponentBoundEvent_71_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__Reload_IKS_K2Node_ComponentBoundEvent_71_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AimDownSights_IKS_K2Node_ComponentBoundEvent_72_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__AimDownSights_IKS_K2Node_ComponentBoundEvent_72_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__AimDownSights_IKS_K2Node_ComponentBoundEvent_72_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__AimDownSights_IKS_K2Node_ComponentBoundEvent_72_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__NextWeapon_IKS_K2Node_ComponentBoundEvent_73_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__NextWeapon_IKS_K2Node_ComponentBoundEvent_73_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__NextWeapon_IKS_K2Node_ComponentBoundEvent_73_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__NextWeapon_IKS_K2Node_ComponentBoundEvent_73_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PreviousWeapon_IKS_K2Node_ComponentBoundEvent_74_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__PreviousWeapon_IKS_K2Node_ComponentBoundEvent_74_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PreviousWeapon_IKS_K2Node_ComponentBoundEvent_74_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__PreviousWeapon_IKS_K2Node_ComponentBoundEvent_74_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot1_IKS_K2Node_ComponentBoundEvent_75_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot1_IKS_K2Node_ComponentBoundEvent_75_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot1_IKS_K2Node_ComponentBoundEvent_75_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot1_IKS_K2Node_ComponentBoundEvent_75_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot2_IKS_K2Node_ComponentBoundEvent_76_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot2_IKS_K2Node_ComponentBoundEvent_76_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot2_IKS_K2Node_ComponentBoundEvent_76_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot2_IKS_K2Node_ComponentBoundEvent_76_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot3_IKS_K2Node_ComponentBoundEvent_77_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot3_IKS_K2Node_ComponentBoundEvent_77_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot3_IKS_K2Node_ComponentBoundEvent_77_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot3_IKS_K2Node_ComponentBoundEvent_77_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot4_IKS_K2Node_ComponentBoundEvent_78_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot4_IKS_K2Node_ComponentBoundEvent_78_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot4_IKS_K2Node_ComponentBoundEvent_78_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot4_IKS_K2Node_ComponentBoundEvent_78_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot5_IKS_K2Node_ComponentBoundEvent_79_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot5_IKS_K2Node_ComponentBoundEvent_79_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot5_IKS_K2Node_ComponentBoundEvent_79_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot5_IKS_K2Node_ComponentBoundEvent_79_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot6_IKS_K2Node_ComponentBoundEvent_80_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot6_IKS_K2Node_ComponentBoundEvent_80_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot6_IKS_K2Node_ComponentBoundEvent_80_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot6_IKS_K2Node_ComponentBoundEvent_80_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot7_IKS_K2Node_ComponentBoundEvent_81_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot7_IKS_K2Node_ComponentBoundEvent_81_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot7_IKS_K2Node_ComponentBoundEvent_81_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot7_IKS_K2Node_ComponentBoundEvent_81_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot8_IKS_K2Node_ComponentBoundEvent_82_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot8_IKS_K2Node_ComponentBoundEvent_82_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot8_IKS_K2Node_ComponentBoundEvent_82_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot8_IKS_K2Node_ComponentBoundEvent_82_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalk_IKS_K2Node_ComponentBoundEvent_83_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__PushToTalk_IKS_K2Node_ComponentBoundEvent_83_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalk_IKS_K2Node_ComponentBoundEvent_83_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__PushToTalk_IKS_K2Node_ComponentBoundEvent_83_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SayAll_IKS_K2Node_ComponentBoundEvent_84_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__SayAll_IKS_K2Node_ComponentBoundEvent_84_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SayAll_IKS_K2Node_ComponentBoundEvent_84_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__SayAll_IKS_K2Node_ComponentBoundEvent_84_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SayTeam_IKS_K2Node_ComponentBoundEvent_85_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__SayTeam_IKS_K2Node_ComponentBoundEvent_85_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SayTeam_IKS_K2Node_ComponentBoundEvent_85_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__SayTeam_IKS_K2Node_ComponentBoundEvent_85_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Use_IKS_K2Node_ComponentBoundEvent_86_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__Use_IKS_K2Node_ComponentBoundEvent_86_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Use_IKS_K2Node_ComponentBoundEvent_86_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__Use_IKS_K2Node_ComponentBoundEvent_86_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Scoreboard_IKS_K2Node_ComponentBoundEvent_87_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__Scoreboard_IKS_K2Node_ComponentBoundEvent_87_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Scoreboard_IKS_K2Node_ComponentBoundEvent_87_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__Scoreboard_IKS_K2Node_ComponentBoundEvent_87_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__DeployMenu_IKS_K2Node_ComponentBoundEvent_88_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__DeployMenu_IKS_K2Node_ComponentBoundEvent_88_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__DeployMenu_IKS_K2Node_ComponentBoundEvent_88_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__DeployMenu_IKS_K2Node_ComponentBoundEvent_88_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__CameraToggle_IKS_K2Node_ComponentBoundEvent_89_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__CameraToggle_IKS_K2Node_ComponentBoundEvent_89_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__CameraToggle_IKS_K2Node_ComponentBoundEvent_89_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__CameraToggle_IKS_K2Node_ComponentBoundEvent_89_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__KeyRemappingSBox_K2Node_ComponentBoundEvent_90_OnUserScrolledEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__KeyRemappingSBox_K2Node_ComponentBoundEvent_90_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__KeyRemappingSBox_K2Node_ComponentBoundEvent_90_OnUserScrolledEvent__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__KeyRemappingSBox_K2Node_ComponentBoundEvent_90_OnUserScrolledEvent__DelegateSignature_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveBackward_IKS_K2Node_ComponentBoundEvent_64_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__MoveBackward_IKS_K2Node_ComponentBoundEvent_64_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__MoveBackward_IKS_K2Node_ComponentBoundEvent_64_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__MoveBackward_IKS_K2Node_ComponentBoundEvent_64_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot0_IKS_K2Node_ComponentBoundEvent_91_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot0_IKS_K2Node_ComponentBoundEvent_91_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot0_IKS_K2Node_ComponentBoundEvent_91_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot0_IKS_K2Node_ComponentBoundEvent_91_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot0_IKS_K2Node_ComponentBoundEvent_92_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot0_IKS_K2Node_ComponentBoundEvent_92_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot0_IKS_K2Node_ComponentBoundEvent_92_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot0_IKS_K2Node_ComponentBoundEvent_92_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot9_IKS_K2Node_ComponentBoundEvent_93_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot9_IKS_K2Node_ComponentBoundEvent_93_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot9_IKS_K2Node_ComponentBoundEvent_93_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot9_IKS_K2Node_ComponentBoundEvent_93_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot9_IKS_K2Node_ComponentBoundEvent_94_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__WeaponSlot9_IKS_K2Node_ComponentBoundEvent_94_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__WeaponSlot9_IKS_K2Node_ComponentBoundEvent_94_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__WeaponSlot9_IKS_K2Node_ComponentBoundEvent_94_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__LeanLeft_IKS_K2Node_ComponentBoundEvent_95_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__LeanLeft_IKS_K2Node_ComponentBoundEvent_95_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__LeanLeft_IKS_K2Node_ComponentBoundEvent_95_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__LeanLeft_IKS_K2Node_ComponentBoundEvent_95_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__LeanRight_IKS_K2Node_ComponentBoundEvent_96_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__LeanRight_IKS_K2Node_ComponentBoundEvent_96_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__LeanRight_IKS_K2Node_ComponentBoundEvent_96_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__LeanRight_IKS_K2Node_ComponentBoundEvent_96_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__LeanLeft_IKS_K2Node_ComponentBoundEvent_97_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__LeanLeft_IKS_K2Node_ComponentBoundEvent_97_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__LeanLeft_IKS_K2Node_ComponentBoundEvent_97_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__LeanLeft_IKS_K2Node_ComponentBoundEvent_97_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__LeanRight_IKS_K2Node_ComponentBoundEvent_98_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__LeanRight_IKS_K2Node_ComponentBoundEvent_98_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__LeanRight_IKS_K2Node_ComponentBoundEvent_98_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__LeanRight_IKS_K2Node_ComponentBoundEvent_98_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Prone_IKS_K2Node_ComponentBoundEvent_99_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__Prone_IKS_K2Node_ComponentBoundEvent_99_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Prone_IKS_K2Node_ComponentBoundEvent_99_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__Prone_IKS_K2Node_ComponentBoundEvent_99_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Prone_IKS_K2Node_ComponentBoundEvent_100_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__Prone_IKS_K2Node_ComponentBoundEvent_100_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__Prone_IKS_K2Node_ComponentBoundEvent_100_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__Prone_IKS_K2Node_ComponentBoundEvent_100_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalkSquad_IKS_K2Node_ComponentBoundEvent_101_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__PushToTalkSquad_IKS_K2Node_ComponentBoundEvent_101_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalkSquad_IKS_K2Node_ComponentBoundEvent_101_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__PushToTalkSquad_IKS_K2Node_ComponentBoundEvent_101_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalkSquad_IKS_K2Node_ComponentBoundEvent_102_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__PushToTalkSquad_IKS_K2Node_ComponentBoundEvent_102_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalkSquad_IKS_K2Node_ComponentBoundEvent_102_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__PushToTalkSquad_IKS_K2Node_ComponentBoundEvent_102_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalkCommand_IKS_K2Node_ComponentBoundEvent_103_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__PushToTalkCommand_IKS_K2Node_ComponentBoundEvent_103_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalkCommand_IKS_K2Node_ComponentBoundEvent_103_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__PushToTalkCommand_IKS_K2Node_ComponentBoundEvent_103_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalkCommand_IKS_K2Node_ComponentBoundEvent_104_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__PushToTalkCommand_IKS_K2Node_ComponentBoundEvent_104_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__PushToTalkCommand_IKS_K2Node_ComponentBoundEvent_104_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__PushToTalkCommand_IKS_K2Node_ComponentBoundEvent_104_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SaySquad_IKS_K2Node_ComponentBoundEvent_105_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__SaySquad_IKS_K2Node_ComponentBoundEvent_105_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SaySquad_IKS_K2Node_ComponentBoundEvent_105_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__SaySquad_IKS_K2Node_ComponentBoundEvent_105_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SaySquad_IKS_K2Node_ComponentBoundEvent_106_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__SaySquad_IKS_K2Node_ComponentBoundEvent_106_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__SaySquad_IKS_K2Node_ComponentBoundEvent_106_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__SaySquad_IKS_K2Node_ComponentBoundEvent_106_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__RadialMenu_IKS_K2Node_ComponentBoundEvent_107_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__RadialMenu_IKS_K2Node_ComponentBoundEvent_107_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__RadialMenu_IKS_K2Node_ComponentBoundEvent_107_OnKeySelected__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__RadialMenu_IKS_K2Node_ComponentBoundEvent_107_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__RadialMenu_IKS_K2Node_ComponentBoundEvent_108_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_OptionMenu_Options_C::BndEvt__RadialMenu_IKS_K2Node_ComponentBoundEvent_108_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.BndEvt__RadialMenu_IKS_K2Node_ComponentBoundEvent_108_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWBP_OptionMenu_Options_C_BndEvt__RadialMenu_IKS_K2Node_ComponentBoundEvent_108_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.ExecuteUbergraph_WBP_OptionMenu_Options
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_OptionMenu_Options_C::ExecuteUbergraph_WBP_OptionMenu_Options(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_OptionMenu_Options.WBP_OptionMenu_Options_C.ExecuteUbergraph_WBP_OptionMenu_Options");
		
		UWBP_OptionMenu_Options_C_ExecuteUbergraph_WBP_OptionMenu_Options_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_OptionMenu_Options_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_OptionMenu_Options_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_OptionMenu_Options.WBP_OptionMenu_Options_C");
		return ptr;
	}

}


