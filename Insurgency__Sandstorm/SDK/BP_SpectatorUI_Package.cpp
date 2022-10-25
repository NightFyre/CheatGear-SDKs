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
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.UpdateControlsContainerVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisibility                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SpectatorUI_C::UpdateControlsContainerVisibility(bool bVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.UpdateControlsContainerVisibility");
		
		UBP_SpectatorUI_C_UpdateControlsContainerVisibility_Params params {};
		params.bVisibility = bVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.OnShowRoundOverUI
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerRoundOverData                        UIData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_SpectatorUI_C::OnShowRoundOverUI(const struct FPlayerRoundOverData& UIData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.OnShowRoundOverUI");
		
		UBP_SpectatorUI_C_OnShowRoundOverUI_Params params {};
		params.UIData = UIData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.OnHideRoundOverUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorUI_C::OnHideRoundOverUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.OnHideRoundOverUI");
		
		UBP_SpectatorUI_C_OnHideRoundOverUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.SetHidden
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewHidden                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SpectatorUI_C::SetHidden(bool bNewHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.SetHidden");
		
		UBP_SpectatorUI_C_SetHidden_Params params {};
		params.bNewHidden = bNewHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.UpdateShoutcasterVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorUI_C::UpdateShoutcasterVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.UpdateShoutcasterVisibility");
		
		UBP_SpectatorUI_C_UpdateShoutcasterVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.UpdateSpectatorPanelVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorUI_C::UpdateSpectatorPanelVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.UpdateSpectatorPanelVisibility");
		
		UBP_SpectatorUI_C_UpdateSpectatorPanelVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.SetDedicatedSpectator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewDedicatedSpectator                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SpectatorUI_C::SetDedicatedSpectator(bool bNewDedicatedSpectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.SetDedicatedSpectator");
		
		UBP_SpectatorUI_C_SetDedicatedSpectator_Params params {};
		params.bNewDedicatedSpectator = bNewDedicatedSpectator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.SetIsSpectator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewIsSpectator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SpectatorUI_C::SetIsSpectator(bool bNewIsSpectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.SetIsSpectator");
		
		UBP_SpectatorUI_C_SetIsSpectator_Params params {};
		params.bNewIsSpectator = bNewIsSpectator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.GetControlsVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_SpectatorUI_C::GetControlsVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.GetControlsVisibility");
		
		UBP_SpectatorUI_C_GetControlsVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.UpdatePlayerPreferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorUI_C::UpdatePlayerPreferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.UpdatePlayerPreferences");
		
		UBP_SpectatorUI_C_UpdatePlayerPreferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.UpdateHiddenState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorUI_C::UpdateHiddenState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.UpdateHiddenState");
		
		UBP_SpectatorUI_C_UpdateHiddenState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.UpdateSpectatorStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorUI_C::UpdateSpectatorStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.UpdateSpectatorStatus");
		
		UBP_SpectatorUI_C_UpdateSpectatorStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.GetPlayerWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            TeamId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PlayerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_SpectatorPlayerWidget_C*                 Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorUI_C::GetPlayerWidget(int32_t TeamId, int32_t PlayerIndex, class UBP_SpectatorPlayerWidget_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.GetPlayerWidget");
		
		UBP_SpectatorUI_C_GetPlayerWidget_Params params {};
		params.TeamId = TeamId;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.UpdatePlayerWidgets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorUI_C::UpdatePlayerWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.UpdatePlayerWidgets");
		
		UBP_SpectatorUI_C_UpdatePlayerWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.IsIngameMenuActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SpectatorUI_C::IsIngameMenuActive(bool* Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.IsIngameMenuActive");
		
		UBP_SpectatorUI_C_IsIngameMenuActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.IsPlayingBackDemo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WatchingDemo                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SpectatorUI_C::IsPlayingBackDemo(bool* WatchingDemo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.IsPlayingBackDemo");
		
		UBP_SpectatorUI_C_IsPlayingBackDemo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WatchingDemo != nullptr)
			*WatchingDemo = params.WatchingDemo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.OnHUDPreferencesUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorUI_C::OnHUDPreferencesUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.OnHUDPreferencesUpdated");
		
		UBP_SpectatorUI_C_OnHUDPreferencesUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.Tick");
		
		UBP_SpectatorUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_SpectatorUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.Construct");
		
		UBP_SpectatorUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorUI.BP_SpectatorUI_C.ExecuteUbergraph_BP_SpectatorUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorUI_C::ExecuteUbergraph_BP_SpectatorUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorUI.BP_SpectatorUI_C.ExecuteUbergraph_BP_SpectatorUI");
		
		UBP_SpectatorUI_C_ExecuteUbergraph_BP_SpectatorUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SpectatorUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SpectatorUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_SpectatorUI.BP_SpectatorUI_C");
		return ptr;
	}

}


