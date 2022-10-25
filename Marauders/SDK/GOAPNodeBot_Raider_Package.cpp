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
	 * 		Name   -> Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.OnRep_CurrentGoal
	 * 		Flags  -> ()
	 */
	void AGOAPNodeBot_Raider_C::OnRep_CurrentGoal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.OnRep_CurrentGoal");
		
		AGOAPNodeBot_Raider_C_OnRep_CurrentGoal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.OnRep_CurrentPlan
	 * 		Flags  -> ()
	 */
	void AGOAPNodeBot_Raider_C::OnRep_CurrentPlan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.OnRep_CurrentPlan");
		
		AGOAPNodeBot_Raider_C_OnRep_CurrentPlan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.OnLoaded_05D57DDE472BE102CBF387860E5542C9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAPNodeBot_Raider_C::OnLoaded_05D57DDE472BE102CBF387860E5542C9(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.OnLoaded_05D57DDE472BE102CBF387860E5542C9");
		
		AGOAPNodeBot_Raider_C_OnLoaded_05D57DDE472BE102CBF387860E5542C9_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.OnLoaded_BFE76CB343698C7D0EB23FA33115941C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAPNodeBot_Raider_C::OnLoaded_BFE76CB343698C7D0EB23FA33115941C(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.OnLoaded_BFE76CB343698C7D0EB23FA33115941C");
		
		AGOAPNodeBot_Raider_C_OnLoaded_BFE76CB343698C7D0EB23FA33115941C_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.MyGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Current_Plan                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AGOAPNodeBot_Raider_C::MyGoal(const class FString& Current_Plan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.MyGoal");
		
		AGOAPNodeBot_Raider_C_MyGoal_Params params {};
		params.Current_Plan = Current_Plan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.OnGOAPDEBUGplan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CurrentPlan                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AGOAPNodeBot_Raider_C::OnGOAPDEBUGplan(const class FString& CurrentPlan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.OnGOAPDEBUGplan");
		
		AGOAPNodeBot_Raider_C_OnGOAPDEBUGplan_Params params {};
		params.CurrentPlan = CurrentPlan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.Ai_StoreBaseMissRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseMissRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAPNodeBot_Raider_C::Ai_StoreBaseMissRate(float BaseMissRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.Ai_StoreBaseMissRate");
		
		AGOAPNodeBot_Raider_C_Ai_StoreBaseMissRate_Params params {};
		params.BaseMissRate = BaseMissRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.MulticastPlayVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               is_A_Shout                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        VoiceSet_DT_Row                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDataTable*                                  VoiceSet_DT                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        VoiceLine                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAPNodeBot_Raider_C::MulticastPlayVoice(bool is_A_Shout, const class FName& VoiceSet_DT_Row, class UDataTable* VoiceSet_DT, const class FName& VoiceLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.MulticastPlayVoice");
		
		AGOAPNodeBot_Raider_C_MulticastPlayVoice_Params params {};
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
	 * 		Name   -> Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGOAPNodeBot_Raider_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.ReceiveBeginPlay");
		
		AGOAPNodeBot_Raider_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.Ai_CheckSetMyInitialAmmoCount
	 * 		Flags  -> ()
	 */
	void AGOAPNodeBot_Raider_C::Ai_CheckSetMyInitialAmmoCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.Ai_CheckSetMyInitialAmmoCount");
		
		AGOAPNodeBot_Raider_C_Ai_CheckSetMyInitialAmmoCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.PlayVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAShout                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDataTable*                                  VoiceSetDT                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        VoiceLine                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAPNodeBot_Raider_C::PlayVoice(bool IsAShout, class UDataTable* VoiceSetDT, const class FName& VoiceLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.PlayVoice");
		
		AGOAPNodeBot_Raider_C_PlayVoice_Params params {};
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
	 * 		Name   -> Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.Ai_SetMyGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CurrentPlan                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AGOAPNodeBot_Raider_C::Ai_SetMyGoal(const class FString& CurrentPlan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.Ai_SetMyGoal");
		
		AGOAPNodeBot_Raider_C_Ai_SetMyGoal_Params params {};
		params.CurrentPlan = CurrentPlan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.Ai_TurnOnOffDebugText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGOAPNodeBot_Raider_C::Ai_TurnOnOffDebugText(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.Ai_TurnOnOffDebugText");
		
		AGOAPNodeBot_Raider_C_Ai_TurnOnOffDebugText_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.ReceivePossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAPNodeBot_Raider_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.ReceivePossessed");
		
		AGOAPNodeBot_Raider_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.ExecuteUbergraph_GOAPNodeBot_Raider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGOAPNodeBot_Raider_C::ExecuteUbergraph_GOAPNodeBot_Raider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAPNodeBot_Raider.GOAPNodeBot_Raider_C.ExecuteUbergraph_GOAPNodeBot_Raider");
		
		AGOAPNodeBot_Raider_C_ExecuteUbergraph_GOAPNodeBot_Raider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGOAPNodeBot_Raider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGOAPNodeBot_Raider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GOAPNodeBot_Raider.GOAPNodeBot_Raider_C");
		return ptr;
	}

}


