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
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.UpdateDevStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewDevStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_Scoreboard_PlayerBadge_C::UpdateDevStatus(bool bNewDevStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.UpdateDevStatus");
		
		UBP_Widget_Scoreboard_PlayerBadge_C_UpdateDevStatus_Params params {};
		params.bNewDevStatus = bNewDevStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.UpdateActiveWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerBadge_C::UpdateActiveWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.UpdateActiveWidget");
		
		UBP_Widget_Scoreboard_PlayerBadge_C_UpdateActiveWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.UpdateExperience
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewExperience                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_PlayerBadge_C::UpdateExperience(int32_t NewExperience)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.UpdateExperience");
		
		UBP_Widget_Scoreboard_PlayerBadge_C_UpdateExperience_Params params {};
		params.NewExperience = NewExperience;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.SetRankColors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerBadge_C::SetRankColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.SetRankColors");
		
		UBP_Widget_Scoreboard_PlayerBadge_C_SetRankColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.SetRankNumberText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerBadge_C::SetRankNumberText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.SetRankNumberText");
		
		UBP_Widget_Scoreboard_PlayerBadge_C_SetRankNumberText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.GetRankNumber
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            RankNumber                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_PlayerBadge_C::GetRankNumber(int32_t* RankNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.GetRankNumber");
		
		UBP_Widget_Scoreboard_PlayerBadge_C_GetRankNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RankNumber != nullptr)
			*RankNumber = params.RankNumber;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.SetDefaultsFromPlayerState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_PlayerBadge_C::SetDefaultsFromPlayerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.SetDefaultsFromPlayerState");
		
		UBP_Widget_Scoreboard_PlayerBadge_C_SetDefaultsFromPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_Scoreboard_PlayerBadge_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.PreConstruct");
		
		UBP_Widget_Scoreboard_PlayerBadge_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.ExecuteUbergraph_BP_Widget_Scoreboard_PlayerBadge
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_PlayerBadge_C::ExecuteUbergraph_BP_Widget_Scoreboard_PlayerBadge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C.ExecuteUbergraph_BP_Widget_Scoreboard_PlayerBadge");
		
		UBP_Widget_Scoreboard_PlayerBadge_C_ExecuteUbergraph_BP_Widget_Scoreboard_PlayerBadge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_Scoreboard_PlayerBadge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_Scoreboard_PlayerBadge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C");
		return ptr;
	}

}


