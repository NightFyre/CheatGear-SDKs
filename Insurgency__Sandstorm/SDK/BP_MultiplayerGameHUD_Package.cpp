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
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.SetCenterPopupMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        newText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MultiplayerGameHUD_C::SetCenterPopupMessage(const class FText& newText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.SetCenterPopupMessage");
		
		UBP_MultiplayerGameHUD_C_SetCenterPopupMessage_Params params {};
		params.newText = newText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.UpdateObjectiveDockVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MultiplayerGameHUD_C::UpdateObjectiveDockVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.UpdateObjectiveDockVisibility");
		
		UBP_MultiplayerGameHUD_C_UpdateObjectiveDockVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnUpdateSpectatorState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewSpectatorState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MultiplayerGameHUD_C::OnUpdateSpectatorState(bool NewSpectatorState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnUpdateSpectatorState");
		
		UBP_MultiplayerGameHUD_C_OnUpdateSpectatorState_Params params {};
		params.NewSpectatorState = NewSpectatorState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnUpdateMenuVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MultiplayerGameHUD_C::OnUpdateMenuVisibility(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnUpdateMenuVisibility");
		
		UBP_MultiplayerGameHUD_C_OnUpdateMenuVisibility_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnUpdateScoreboardVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MultiplayerGameHUD_C::OnUpdateScoreboardVisibility(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnUpdateScoreboardVisibility");
		
		UBP_MultiplayerGameHUD_C_OnUpdateScoreboardVisibility_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.UpdateBottomDockVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MultiplayerGameHUD_C::UpdateBottomDockVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.UpdateBottomDockVisibility");
		
		UBP_MultiplayerGameHUD_C_UpdateBottomDockVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.UpdateNetworkStatus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      DesiredLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MultiplayerGameHUD_C::UpdateNetworkStatus(unsigned char DesiredLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.UpdateNetworkStatus");
		
		UBP_MultiplayerGameHUD_C_UpdateNetworkStatus_Params params {};
		params.DesiredLocation = DesiredLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetWaitingForPlayersVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MultiplayerGameHUD_C::GetWaitingForPlayersVisibility(ESlateVisibility* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetWaitingForPlayersVisibility");
		
		UBP_MultiplayerGameHUD_C_GetWaitingForPlayersVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.Get_WaitingCount_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_MultiplayerGameHUD_C::Get_WaitingCount_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.Get_WaitingCount_Text_1");
		
		UBP_MultiplayerGameHUD_C_Get_WaitingCount_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.IsCurrentlySpectating
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Spectating                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MultiplayerGameHUD_C::IsCurrentlySpectating(bool* Spectating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.IsCurrentlySpectating");
		
		UBP_MultiplayerGameHUD_C_IsCurrentlySpectating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Spectating != nullptr)
			*Spectating = params.Spectating;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.IsIngameMenuActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MultiplayerGameHUD_C::IsIngameMenuActive(bool* Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.IsIngameMenuActive");
		
		UBP_MultiplayerGameHUD_C_IsIngameMenuActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.IsScoreboardActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MultiplayerGameHUD_C::IsScoreboardActive(bool* Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.IsScoreboardActive");
		
		UBP_MultiplayerGameHUD_C_IsScoreboardActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetKillfeedVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MultiplayerGameHUD_C::GetKillfeedVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetKillfeedVisibility");
		
		UBP_MultiplayerGameHUD_C_GetKillfeedVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.SetGameStateDescription
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MultiplayerGameHUD_C::SetGameStateDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.SetGameStateDescription");
		
		UBP_MultiplayerGameHUD_C_SetGameStateDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetObjectiveDockVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MultiplayerGameHUD_C::GetObjectiveDockVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetObjectiveDockVisibility");
		
		UBP_MultiplayerGameHUD_C_GetObjectiveDockVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetTacticalMapVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MultiplayerGameHUD_C::GetTacticalMapVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetTacticalMapVisibility");
		
		UBP_MultiplayerGameHUD_C_GetTacticalMapVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.UpdateGameStateVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MultiplayerGameHUD_C::UpdateGameStateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.UpdateGameStateVisibility");
		
		UBP_MultiplayerGameHUD_C_UpdateGameStateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetGameStateVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MultiplayerGameHUD_C::GetGameStateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetGameStateVisibility");
		
		UBP_MultiplayerGameHUD_C_GetGameStateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetDockVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MultiplayerGameHUD_C::GetDockVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.GetDockVisibility");
		
		UBP_MultiplayerGameHUD_C_GetDockVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MultiplayerGameHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.Construct");
		
		UBP_MultiplayerGameHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MultiplayerGameHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.Tick");
		
		UBP_MultiplayerGameHUD_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MultiplayerGameHUD_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.PreConstruct");
		
		UBP_MultiplayerGameHUD_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.BndEvt__BP_WaveCounter_K2Node_ComponentBoundEvent_0_OnWaveCountChange__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Difference                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MultiplayerGameHUD_C::BndEvt__BP_WaveCounter_K2Node_ComponentBoundEvent_0_OnWaveCountChange__DelegateSignature(int32_t Difference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.BndEvt__BP_WaveCounter_K2Node_ComponentBoundEvent_0_OnWaveCountChange__DelegateSignature");
		
		UBP_MultiplayerGameHUD_C_BndEvt__BP_WaveCounter_K2Node_ComponentBoundEvent_0_OnWaveCountChange__DelegateSignature_Params params {};
		params.Difference = Difference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.BndEvt__BP_WaveCounter_0_K2Node_ComponentBoundEvent_1_OnWaveCountChange__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Difference                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MultiplayerGameHUD_C::BndEvt__BP_WaveCounter_0_K2Node_ComponentBoundEvent_1_OnWaveCountChange__DelegateSignature(int32_t Difference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.BndEvt__BP_WaveCounter_0_K2Node_ComponentBoundEvent_1_OnWaveCountChange__DelegateSignature");
		
		UBP_MultiplayerGameHUD_C_BndEvt__BP_WaveCounter_0_K2Node_ComponentBoundEvent_1_OnWaveCountChange__DelegateSignature_Params params {};
		params.Difference = Difference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnMapVoteStarted
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MultiplayerGameHUD_C::OnMapVoteStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnMapVoteStarted");
		
		UBP_MultiplayerGameHUD_C_OnMapVoteStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnShowCenterMessage
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        MessageText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_MultiplayerGameHUD_C::OnShowCenterMessage(const class FText& MessageText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnShowCenterMessage");
		
		UBP_MultiplayerGameHUD_C_OnShowCenterMessage_Params params {};
		params.MessageText = MessageText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnRoundOverUIToggled
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNowVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MultiplayerGameHUD_C::OnRoundOverUIToggled(bool bNowVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnRoundOverUIToggled");
		
		UBP_MultiplayerGameHUD_C_OnRoundOverUIToggled_Params params {};
		params.bNowVisible = bNowVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.ExecuteUbergraph_BP_MultiplayerGameHUD
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MultiplayerGameHUD_C::ExecuteUbergraph_BP_MultiplayerGameHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.ExecuteUbergraph_BP_MultiplayerGameHUD");
		
		UBP_MultiplayerGameHUD_C_ExecuteUbergraph_BP_MultiplayerGameHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnUpdateBottomDockVisibility__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   NewVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MultiplayerGameHUD_C::OnUpdateBottomDockVisibility__DelegateSignature(ESlateVisibility NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C.OnUpdateBottomDockVisibility__DelegateSignature");
		
		UBP_MultiplayerGameHUD_C_OnUpdateBottomDockVisibility__DelegateSignature_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MultiplayerGameHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MultiplayerGameHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MultiplayerGameHUD.BP_MultiplayerGameHUD_C");
		return ptr;
	}

}


