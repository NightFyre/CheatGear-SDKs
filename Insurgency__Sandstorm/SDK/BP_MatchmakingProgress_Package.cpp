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
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.SetUsingController
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UsingController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EeInputIconType                                    Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MatchmakingProgress_C::SetUsingController(bool UsingController, EeInputIconType Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.SetUsingController");
		
		UBP_MatchmakingProgress_C_SetUsingController_Params params {};
		params.UsingController = UsingController;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.SetEQTVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bImmediate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchmakingProgress_C::SetEQTVisible(bool bVisible, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.SetEQTVisible");
		
		UBP_MatchmakingProgress_C_SetEQTVisible_Params params {};
		params.bVisible = bVisible;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.EstimatedSecondsText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBP_MatchmakingProgress_C::EstimatedSecondsText(int32_t Seconds, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.EstimatedSecondsText");
		
		UBP_MatchmakingProgress_C_EstimatedSecondsText_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.IsPanelVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchmakingProgress_C::IsPanelVisible(bool* Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.IsPanelVisible");
		
		UBP_MatchmakingProgress_C_IsPanelVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visible != nullptr)
			*Visible = params.Visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.CheckEstimatedQueueTime
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MatchmakingProgress_C::CheckEstimatedQueueTime(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.CheckEstimatedQueueTime");
		
		UBP_MatchmakingProgress_C_CheckEstimatedQueueTime_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.HasRecentError
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchmakingProgress_C::HasRecentError(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.HasRecentError");
		
		UBP_MatchmakingProgress_C_HasRecentError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.ShouldBeVisibleForLatejoin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bShouldBeVisible                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchmakingProgress_C::ShouldBeVisibleForLatejoin(bool* bShouldBeVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.ShouldBeVisibleForLatejoin");
		
		UBP_MatchmakingProgress_C_ShouldBeVisibleForLatejoin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldBeVisible != nullptr)
			*bShouldBeVisible = params.bShouldBeVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.ShouldBeVisibleForMatchmaking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bShouldBeVisible                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchmakingProgress_C::ShouldBeVisibleForMatchmaking(bool* bShouldBeVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.ShouldBeVisibleForMatchmaking");
		
		UBP_MatchmakingProgress_C_ShouldBeVisibleForMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldBeVisible != nullptr)
			*bShouldBeVisible = params.bShouldBeVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.SetProgressTextErrorState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsError                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchmakingProgress_C::SetProgressTextErrorState(bool bIsError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.SetProgressTextErrorState");
		
		UBP_MatchmakingProgress_C_SetProgressTextErrorState_Params params {};
		params.bIsError = bIsError;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.OnReadyCheckUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLocalPlayerReady                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchmakingProgress_C::OnReadyCheckUpdated(bool bActive, bool bLocalPlayerReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.OnReadyCheckUpdated");
		
		UBP_MatchmakingProgress_C_OnReadyCheckUpdated_Params params {};
		params.bActive = bActive;
		params.bLocalPlayerReady = bLocalPlayerReady;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Get_CancelButtonLabel_Text_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_MatchmakingProgress_C::Get_CancelButtonLabel_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Get_CancelButtonLabel_Text_1");
		
		UBP_MatchmakingProgress_C_Get_CancelButtonLabel_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Get_ElapsedTIme_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_MatchmakingProgress_C::Get_ElapsedTIme_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Get_ElapsedTIme_Text_1");
		
		UBP_MatchmakingProgress_C_Get_ElapsedTIme_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.GetText_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_MatchmakingProgress_C::GetText_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.GetText_1");
		
		UBP_MatchmakingProgress_C_GetText_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.GetOverallVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MatchmakingProgress_C::GetOverallVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.GetOverallVisibility");
		
		UBP_MatchmakingProgress_C_GetOverallVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Get_TextStatus_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_MatchmakingProgress_C::Get_TextStatus_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Get_TextStatus_Text_1");
		
		UBP_MatchmakingProgress_C_Get_TextStatus_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Get_BtnCancelMatchmaking_bIsEnabled_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_MatchmakingProgress_C::Get_BtnCancelMatchmaking_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Get_BtnCancelMatchmaking_bIsEnabled_1");
		
		UBP_MatchmakingProgress_C_Get_BtnCancelMatchmaking_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MatchmakingProgress_C::BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UBP_MatchmakingProgress_C_BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MatchmakingProgress_C::BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");
		
		UBP_MatchmakingProgress_C_BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MatchmakingProgress_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Tick");
		
		UBP_MatchmakingProgress_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MatchmakingProgress_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.Construct");
		
		UBP_MatchmakingProgress_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.BndEvt__BtnReady_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MatchmakingProgress_C::BndEvt__BtnReady_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.BndEvt__BtnReady_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UBP_MatchmakingProgress_C_BndEvt__BtnReady_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.BndEvt__BtnNotReady_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MatchmakingProgress_C::BndEvt__BtnNotReady_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.BndEvt__BtnNotReady_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBP_MatchmakingProgress_C_BndEvt__BtnNotReady_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MatchmakingProgress_C::BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBP_MatchmakingProgress_C_BndEvt__BtnCancelMatchmaking_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.OnMatchmakingSearchBegin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MatchmakingProgress_C::OnMatchmakingSearchBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.OnMatchmakingSearchBegin");
		
		UBP_MatchmakingProgress_C_OnMatchmakingSearchBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.OnMatchmakingError
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EMatchmakingFailure                                MatchmakingFailureType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MatchmakingProgress_C::OnMatchmakingError(const class FText& Error, EMatchmakingFailure MatchmakingFailureType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.OnMatchmakingError");
		
		UBP_MatchmakingProgress_C_OnMatchmakingError_Params params {};
		params.Error = Error;
		params.MatchmakingFailureType = MatchmakingFailureType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.ExecuteUbergraph_BP_MatchmakingProgress
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MatchmakingProgress_C::ExecuteUbergraph_BP_MatchmakingProgress(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchmakingProgress.BP_MatchmakingProgress_C.ExecuteUbergraph_BP_MatchmakingProgress");
		
		UBP_MatchmakingProgress_C_ExecuteUbergraph_BP_MatchmakingProgress_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MatchmakingProgress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MatchmakingProgress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MatchmakingProgress.BP_MatchmakingProgress_C");
		return ptr;
	}

}


