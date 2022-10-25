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
	 * 		Name   -> Function BP_WaveCounter.BP_WaveCounter_C.ToggleBlinking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Blink                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_WaveCounter_C::ToggleBlinking(bool Blink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounter.BP_WaveCounter_C.ToggleBlinking");
		
		UBP_WaveCounter_C_ToggleBlinking_Params params {};
		params.Blink = Blink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WaveCounter.BP_WaveCounter_C.Update Wave Count Visibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_WaveCounter_C::Update_Wave_Count_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounter.BP_WaveCounter_C.Update Wave Count Visibility");
		
		UBP_WaveCounter_C_Update_Wave_Count_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WaveCounter.BP_WaveCounter_C.UpdateWaveCount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WaveCounter_C::UpdateWaveCount(int32_t NewCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounter.BP_WaveCounter_C.UpdateWaveCount");
		
		UBP_WaveCounter_C_UpdateWaveCount_Params params {};
		params.NewCount = NewCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WaveCounter.BP_WaveCounter_C.GetWaveCountColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_WaveCounter_C::GetWaveCountColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounter.BP_WaveCounter_C.GetWaveCountColor");
		
		UBP_WaveCounter_C_GetWaveCountColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WaveCounter.BP_WaveCounter_C.GetWaveCountVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_WaveCounter_C::GetWaveCountVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounter.BP_WaveCounter_C.GetWaveCountVisibility");
		
		UBP_WaveCounter_C_GetWaveCountVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WaveCounter.BP_WaveCounter_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WaveCounter_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounter.BP_WaveCounter_C.Tick");
		
		UBP_WaveCounter_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WaveCounter.BP_WaveCounter_C.ChangeText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_WaveCounter_C::ChangeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounter.BP_WaveCounter_C.ChangeText");
		
		UBP_WaveCounter_C_ChangeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WaveCounter.BP_WaveCounter_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_WaveCounter_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounter.BP_WaveCounter_C.PreConstruct");
		
		UBP_WaveCounter_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WaveCounter.BP_WaveCounter_C.OnUpdateFaction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_WaveCounter_C::OnUpdateFaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounter.BP_WaveCounter_C.OnUpdateFaction");
		
		UBP_WaveCounter_C_OnUpdateFaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WaveCounter.BP_WaveCounter_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_WaveCounter_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounter.BP_WaveCounter_C.Construct");
		
		UBP_WaveCounter_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WaveCounter.BP_WaveCounter_C.OnRefreshTeams
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_WaveCounter_C::OnRefreshTeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounter.BP_WaveCounter_C.OnRefreshTeams");
		
		UBP_WaveCounter_C_OnRefreshTeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WaveCounter.BP_WaveCounter_C.OnPlayerChangedTeam
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      TeamId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATeamInfo*                                   TeamInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WaveCounter_C::OnPlayerChangedTeam(unsigned char TeamId, class ATeamInfo* TeamInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounter.BP_WaveCounter_C.OnPlayerChangedTeam");
		
		UBP_WaveCounter_C_OnPlayerChangedTeam_Params params {};
		params.TeamId = TeamId;
		params.TeamInfo = TeamInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WaveCounter.BP_WaveCounter_C.CheckWaveCount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_WaveCounter_C::CheckWaveCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounter.BP_WaveCounter_C.CheckWaveCount");
		
		UBP_WaveCounter_C_CheckWaveCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WaveCounter.BP_WaveCounter_C.OnWaveShouldBlinkDelegate_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bBlink                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_WaveCounter_C::OnWaveShouldBlinkDelegate_Event_1(bool bBlink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounter.BP_WaveCounter_C.OnWaveShouldBlinkDelegate_Event_1");
		
		UBP_WaveCounter_C_OnWaveShouldBlinkDelegate_Event_1_Params params {};
		params.bBlink = bBlink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WaveCounter.BP_WaveCounter_C.ExecuteUbergraph_BP_WaveCounter
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WaveCounter_C::ExecuteUbergraph_BP_WaveCounter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounter.BP_WaveCounter_C.ExecuteUbergraph_BP_WaveCounter");
		
		UBP_WaveCounter_C_ExecuteUbergraph_BP_WaveCounter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WaveCounter.BP_WaveCounter_C.OnWaveCountChange__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Difference                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WaveCounter_C::OnWaveCountChange__DelegateSignature(int32_t Difference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounter.BP_WaveCounter_C.OnWaveCountChange__DelegateSignature");
		
		UBP_WaveCounter_C_OnWaveCountChange__DelegateSignature_Params params {};
		params.Difference = Difference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_WaveCounter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_WaveCounter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_WaveCounter.BP_WaveCounter_C");
		return ptr;
	}

}


