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
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.IsCoopGamemode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsCoop                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RoundVictory_C::IsCoopGamemode(bool* IsCoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.IsCoopGamemode");
		
		UBP_RoundVictory_C_IsCoopGamemode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsCoop != nullptr)
			*IsCoop = params.IsCoop;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.CheckMatchDraw
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Draw                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RoundVictory_C::CheckMatchDraw(bool* Draw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.CheckMatchDraw");
		
		UBP_RoundVictory_C_CheckMatchDraw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Draw != nullptr)
			*Draw = params.Draw;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.PopEventItemUnlock
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RoundVictory_C::PopEventItemUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.PopEventItemUnlock");
		
		UBP_RoundVictory_C_PopEventItemUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.ShowRoundStatsPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RoundVictory_C::ShowRoundStatsPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.ShowRoundStatsPanel");
		
		UBP_RoundVictory_C_ShowRoundStatsPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.TransitionToMatchOver
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerMatchOverData                        UIData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_RoundVictory_C::TransitionToMatchOver(const struct FPlayerMatchOverData& UIData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.TransitionToMatchOver");
		
		UBP_RoundVictory_C_TransitionToMatchOver_Params params {};
		params.UIData = UIData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.OnBackendRewardsReceived
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RoundNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameStatsRoundReward                       Rewards                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_RoundVictory_C::OnBackendRewardsReceived(int32_t RoundNumber, const struct FGameStatsRoundReward& Rewards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.OnBackendRewardsReceived");
		
		UBP_RoundVictory_C_OnBackendRewardsReceived_Params params {};
		params.RoundNumber = RoundNumber;
		params.Rewards = Rewards;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.OnMapVoteStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RoundVictory_C::OnMapVoteStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.OnMapVoteStarted");
		
		UBP_RoundVictory_C_OnMapVoteStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.TickTimeUntilText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RoundVictory_C::TickTimeUntilText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.TickTimeUntilText");
		
		UBP_RoundVictory_C_TickTimeUntilText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.SetupTimeUntilText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RoundVictory_C::SetupTimeUntilText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.SetupTimeUntilText");
		
		UBP_RoundVictory_C_SetupTimeUntilText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.StartAnimationSequence
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RoundVictory_C::StartAnimationSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.StartAnimationSequence");
		
		UBP_RoundVictory_C_StartAnimationSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.GetTeamScore
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bLeftTeam                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Score                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RoundVictory_C::GetTeamScore(bool bLeftTeam, int32_t* Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.GetTeamScore");
		
		UBP_RoundVictory_C_GetTeamScore_Params params {};
		params.bLeftTeam = bLeftTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Score != nullptr)
			*Score = params.Score;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.ApplyTeamFactionEmblem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UImage*                                      Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATeamInfo*                                   Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                RelativeColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          FallbackMaterial                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RoundVictory_C::ApplyTeamFactionEmblem(class UImage* Image, class ATeamInfo* Team, const struct FLinearColor& RelativeColor, class UMaterialInterface* FallbackMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.ApplyTeamFactionEmblem");
		
		UBP_RoundVictory_C_ApplyTeamFactionEmblem_Params params {};
		params.Image = Image;
		params.Team = Team;
		params.RelativeColor = RelativeColor;
		params.FallbackMaterial = FallbackMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.UpdateFactionColorsAndIcons
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RoundVictory_C::UpdateFactionColorsAndIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.UpdateFactionColorsAndIcons");
		
		UBP_RoundVictory_C_UpdateFactionColorsAndIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.UpdatePanelVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RoundVictory_C::UpdatePanelVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.UpdatePanelVisibility");
		
		UBP_RoundVictory_C_UpdatePanelVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.PopulateTaglines
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RoundVictory_C::PopulateTaglines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.PopulateTaglines");
		
		UBP_RoundVictory_C_PopulateTaglines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.GetRightTeam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class ATeamInfo*                                   Team                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RoundVictory_C::GetRightTeam(class ATeamInfo** Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.GetRightTeam");
		
		UBP_RoundVictory_C_GetRightTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Team != nullptr)
			*Team = params.Team;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.GetLeftTeam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class ATeamInfo*                                   Team                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RoundVictory_C::GetLeftTeam(class ATeamInfo** Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.GetLeftTeam");
		
		UBP_RoundVictory_C_GetLeftTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Team != nullptr)
			*Team = params.Team;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.OnItemDataLoaded_8EE2211342C797A1DD00C1B97F729155
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FOnlineItemClaimResponse>            Items                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_RoundVictory_C::OnItemDataLoaded_8EE2211342C797A1DD00C1B97F729155(TArray<struct FOnlineItemClaimResponse> Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.OnItemDataLoaded_8EE2211342C797A1DD00C1B97F729155");
		
		UBP_RoundVictory_C_OnItemDataLoaded_8EE2211342C797A1DD00C1B97F729155_Params params {};
		params.Items = Items;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.ShowPlayerExpEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RoundVictory_C::ShowPlayerExpEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.ShowPlayerExpEvent");
		
		UBP_RoundVictory_C_ShowPlayerExpEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.OnInGameMenuVisible
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RoundVictory_C::OnInGameMenuVisible(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.OnInGameMenuVisible");
		
		UBP_RoundVictory_C_OnInGameMenuVisible_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.OnScoreboardVisibilityChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShow                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RoundVictory_C::OnScoreboardVisibilityChange(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.OnScoreboardVisibilityChange");
		
		UBP_RoundVictory_C_OnScoreboardVisibilityChange_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_RoundVictory_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.Construct");
		
		UBP_RoundVictory_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.ShowEventUnlocks
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    ItemIds                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_RoundVictory_C::ShowEventUnlocks(TArray<int32_t> ItemIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.ShowEventUnlocks");
		
		UBP_RoundVictory_C_ShowEventUnlocks_Params params {};
		params.ItemIds = ItemIds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.WidgetAnimationEvt_Anim_Intro_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_RoundVictory_C::WidgetAnimationEvt_Anim_Intro_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.WidgetAnimationEvt_Anim_Intro_K2Node_WidgetAnimationEvent_1");
		
		UBP_RoundVictory_C_WidgetAnimationEvt_Anim_Intro_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_RoundVictory_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.Destruct");
		
		UBP_RoundVictory_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory.BP_RoundVictory_C.ExecuteUbergraph_BP_RoundVictory
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RoundVictory_C::ExecuteUbergraph_BP_RoundVictory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory.BP_RoundVictory_C.ExecuteUbergraph_BP_RoundVictory");
		
		UBP_RoundVictory_C_ExecuteUbergraph_BP_RoundVictory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RoundVictory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RoundVictory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RoundVictory.BP_RoundVictory_C");
		return ptr;
	}

}


