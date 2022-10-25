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
	 * 		Name   -> Function BP_KillerInfo.BP_KillerInfo_C.SetHasValidInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewValidInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KillerInfo_C::SetHasValidInfo(bool bNewValidInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KillerInfo.BP_KillerInfo_C.SetHasValidInfo");
		
		UBP_KillerInfo_C_SetHasValidInfo_Params params {};
		params.bNewValidInfo = bNewValidInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KillerInfo.BP_KillerInfo_C.SetKillerDistance
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KillerInfo_C::SetKillerDistance(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KillerInfo.BP_KillerInfo_C.SetKillerDistance");
		
		UBP_KillerInfo_C_SetKillerDistance_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KillerInfo.BP_KillerInfo_C.SetShowNemesisStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KillerInfo_C::SetShowNemesisStats(bool bNewVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KillerInfo.BP_KillerInfo_C.SetShowNemesisStats");
		
		UBP_KillerInfo_C_SetShowNemesisStats_Params params {};
		params.bNewVisible = bNewVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KillerInfo.BP_KillerInfo_C.UpdateKillerPlayerInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AINSPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KillerInfo_C::UpdateKillerPlayerInfo(class AINSPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KillerInfo.BP_KillerInfo_C.UpdateKillerPlayerInfo");
		
		UBP_KillerInfo_C_UpdateKillerPlayerInfo_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KillerInfo.BP_KillerInfo_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_KillerInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KillerInfo.BP_KillerInfo_C.Construct");
		
		UBP_KillerInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KillerInfo.BP_KillerInfo_C.OnShowKillerInfo
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerKillNotice                           Notice                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FNemesisStats                               NemesisStats                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_KillerInfo_C::OnShowKillerInfo(const struct FPlayerKillNotice& Notice, const struct FNemesisStats& NemesisStats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KillerInfo.BP_KillerInfo_C.OnShowKillerInfo");
		
		UBP_KillerInfo_C_OnShowKillerInfo_Params params {};
		params.Notice = Notice;
		params.NemesisStats = NemesisStats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KillerInfo.BP_KillerInfo_C.Hide Panel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KillerInfo_C::Hide_Panel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KillerInfo.BP_KillerInfo_C.Hide Panel");
		
		UBP_KillerInfo_C_Hide_Panel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KillerInfo.BP_KillerInfo_C.OnPlayerSpawned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KillerInfo_C::OnPlayerSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KillerInfo.BP_KillerInfo_C.OnPlayerSpawned");
		
		UBP_KillerInfo_C_OnPlayerSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KillerInfo.BP_KillerInfo_C.ExecuteUbergraph_BP_KillerInfo
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KillerInfo_C::ExecuteUbergraph_BP_KillerInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KillerInfo.BP_KillerInfo_C.ExecuteUbergraph_BP_KillerInfo");
		
		UBP_KillerInfo_C_ExecuteUbergraph_BP_KillerInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_KillerInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_KillerInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_KillerInfo.BP_KillerInfo_C");
		return ptr;
	}

}


