/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.onAudioOptionInitialized
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsAudios_C::onAudioOptionInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.onAudioOptionInitialized");
		
		UWB_MenuOptionsAudios_C_onAudioOptionInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnButtonInitialized
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsAudios_C::OnButtonInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnButtonInitialized");
		
		UWB_MenuOptionsAudios_C_OnButtonInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.SetActivateSlotHoverDetailText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Descript                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_MenuOptionsAudios_C::SetActivateSlotHoverDetailText(const class FText& Title, const class FText& Descript)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.SetActivateSlotHoverDetailText");
		
		UWB_MenuOptionsAudios_C_SetActivateSlotHoverDetailText_Params params {};
		params.Title = Title;
		params.Descript = Descript;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.Set Activate Slot Hover
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetSwitcher*                             ActivateSwitcherSelected                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionsAudios_C::SetActivateSlotHover(class UWidgetSwitcher* ActivateSwitcherSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.Set Activate Slot Hover");
		
		UWB_MenuOptionsAudios_C_SetActivateSlotHover_Params params {};
		params.ActivateSwitcherSelected = ActivateSwitcherSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_MenuOptionsAudios_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnInitialized");
		
		UWB_MenuOptionsAudios_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnTotalVolumeHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsAudios_C::OnTotalVolumeHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnTotalVolumeHovered");
		
		UWB_MenuOptionsAudios_C_OnTotalVolumeHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnEffectVolumeHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsAudios_C::OnEffectVolumeHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnEffectVolumeHovered");
		
		UWB_MenuOptionsAudios_C_OnEffectVolumeHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnMusicVolumeHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsAudios_C::OnMusicVolumeHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnMusicVolumeHovered");
		
		UWB_MenuOptionsAudios_C_OnMusicVolumeHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnBackgroundVolumeHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsAudios_C::OnBackgroundVolumeHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnBackgroundVolumeHovered");
		
		UWB_MenuOptionsAudios_C_OnBackgroundVolumeHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnGameUserSettingAudios
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameUserSettingAudios                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FGameUserSettingAudios                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWB_MenuOptionsAudios_C::OnGameUserSettingAudios(const struct FGameUserSettingAudios& NewValue, const struct FGameUserSettingAudios& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnGameUserSettingAudios");
		
		UWB_MenuOptionsAudios_C_OnGameUserSettingAudios_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.UpdateWindowFocusChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFocus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsBackgroundOption                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalVolume                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionsAudios_C::UpdateWindowFocusChanged(bool IsFocus, bool IsBackgroundOption, float TotalVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.UpdateWindowFocusChanged");
		
		UWB_MenuOptionsAudios_C_UpdateWindowFocusChanged_Params params {};
		params.IsFocus = IsFocus;
		params.IsBackgroundOption = IsBackgroundOption;
		params.TotalVolume = TotalVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.ExecuteUbergraph_WB_MenuOptionsAudios
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionsAudios_C::ExecuteUbergraph_WB_MenuOptionsAudios(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.ExecuteUbergraph_WB_MenuOptionsAudios");
		
		UWB_MenuOptionsAudios_C_ExecuteUbergraph_WB_MenuOptionsAudios_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_MenuOptionsAudios_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_MenuOptionsAudios_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_MenuOptionsAudios.WB_MenuOptionsAudios_C");
		return ptr;
	}

}


