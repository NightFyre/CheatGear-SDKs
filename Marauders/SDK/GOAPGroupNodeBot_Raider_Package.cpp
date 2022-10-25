/**
 * Name: Marauders
 * Version: 642675-attempt2
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.OnRep_CurrentGoal
	 * 		Flags  -> ()
	 */
	void AGOAPGroupNodeBot_Raider_C::OnRep_CurrentGoal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.OnRep_CurrentGoal");
		
		AGOAPGroupNodeBot_Raider_C_OnRep_CurrentGoal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.OnRep_CurrentPlan
	 * 		Flags  -> ()
	 */
	void AGOAPGroupNodeBot_Raider_C::OnRep_CurrentPlan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.OnRep_CurrentPlan");
		
		AGOAPGroupNodeBot_Raider_C_OnRep_CurrentPlan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.OnLoaded_919336EC48AF4607A4FA2CB56D3692BB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAPGroupNodeBot_Raider_C::OnLoaded_919336EC48AF4607A4FA2CB56D3692BB(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.OnLoaded_919336EC48AF4607A4FA2CB56D3692BB");
		
		AGOAPGroupNodeBot_Raider_C_OnLoaded_919336EC48AF4607A4FA2CB56D3692BB_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.OnLoaded_9FC27C1043A51E9105BB9E928AAF6B6E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAPGroupNodeBot_Raider_C::OnLoaded_9FC27C1043A51E9105BB9E928AAF6B6E(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.OnLoaded_9FC27C1043A51E9105BB9E928AAF6B6E");
		
		AGOAPGroupNodeBot_Raider_C_OnLoaded_9FC27C1043A51E9105BB9E928AAF6B6E_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.OnGOAPDEBUGplan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CurrentPlan                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AGOAPGroupNodeBot_Raider_C::OnGOAPDEBUGplan(const class FString& CurrentPlan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.OnGOAPDEBUGplan");
		
		AGOAPGroupNodeBot_Raider_C_OnGOAPDEBUGplan_Params params {};
		params.CurrentPlan = CurrentPlan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.Ai_StoreBaseMissRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseMissRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAPGroupNodeBot_Raider_C::Ai_StoreBaseMissRate(float BaseMissRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.Ai_StoreBaseMissRate");
		
		AGOAPGroupNodeBot_Raider_C_Ai_StoreBaseMissRate_Params params {};
		params.BaseMissRate = BaseMissRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.MulticastPlayVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               is_A_Shout                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        VoiceSet_DT_Row                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDataTable*                                  VoiceSet_DT                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        VoiceLine                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAPGroupNodeBot_Raider_C::MulticastPlayVoice(bool is_A_Shout, const class FName& VoiceSet_DT_Row, class UDataTable* VoiceSet_DT, const class FName& VoiceLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.MulticastPlayVoice");
		
		AGOAPGroupNodeBot_Raider_C_MulticastPlayVoice_Params params {};
		params.is_A_Shout = is_A_Shout;
		params.VoiceSet_DT_Row = VoiceSet_DT_Row;
		params.VoiceSet_DT = VoiceSet_DT;
		params.VoiceLine = VoiceLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGOAPGroupNodeBot_Raider_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.ReceiveBeginPlay");
		
		AGOAPGroupNodeBot_Raider_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.Ai_CheckSetMyInitialAmmoCount
	 * 		Flags  -> ()
	 */
	void AGOAPGroupNodeBot_Raider_C::Ai_CheckSetMyInitialAmmoCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.Ai_CheckSetMyInitialAmmoCount");
		
		AGOAPGroupNodeBot_Raider_C_Ai_CheckSetMyInitialAmmoCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.PlayVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAShout                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDataTable*                                  VoiceSetDT                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        VoiceLine                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAPGroupNodeBot_Raider_C::PlayVoice(bool IsAShout, class UDataTable* VoiceSetDT, const class FName& VoiceLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.PlayVoice");
		
		AGOAPGroupNodeBot_Raider_C_PlayVoice_Params params {};
		params.IsAShout = IsAShout;
		params.VoiceSetDT = VoiceSetDT;
		params.VoiceLine = VoiceLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.Ai_SetMyGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CurrentPlan                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AGOAPGroupNodeBot_Raider_C::Ai_SetMyGoal(const class FString& CurrentPlan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.Ai_SetMyGoal");
		
		AGOAPGroupNodeBot_Raider_C_Ai_SetMyGoal_Params params {};
		params.CurrentPlan = CurrentPlan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.Ai_TurnOnOffDebugText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGOAPGroupNodeBot_Raider_C::Ai_TurnOnOffDebugText(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.Ai_TurnOnOffDebugText");
		
		AGOAPGroupNodeBot_Raider_C_Ai_TurnOnOffDebugText_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.ReceivePossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAPGroupNodeBot_Raider_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.ReceivePossessed");
		
		AGOAPGroupNodeBot_Raider_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.ExecuteUbergraph_GOAPGroupNodeBot_Raider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAPGroupNodeBot_Raider_C::ExecuteUbergraph_GOAPGroupNodeBot_Raider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.ExecuteUbergraph_GOAPGroupNodeBot_Raider");
		
		AGOAPGroupNodeBot_Raider_C_ExecuteUbergraph_GOAPGroupNodeBot_Raider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGOAPGroupNodeBot_Raider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGOAPGroupNodeBot_Raider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C");
		return ptr;
	}

}


