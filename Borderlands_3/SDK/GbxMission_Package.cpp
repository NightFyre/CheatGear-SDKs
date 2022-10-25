/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UMissionRewardData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionRewardData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionRewardData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalMissionGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalMissionGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.GlobalMissionGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F71310
	 * 		Name   -> Function GbxMission.Mission.UpdateObjective
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMissionObjective*                           Objective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMission::UpdateObjective(class UMissionObjective* Objective, class UObject* Context, unsigned char Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.UpdateObjective");
		
		UMission_UpdateObjective_Params params {};
		params.Objective = Objective;
		params.Context = Context;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F71180
	 * 		Name   -> Function GbxMission.Mission.UnpauseObjectiveChain
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMissionObjective*                           Objective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMission::UnpauseObjectiveChain(class UMissionObjective* Objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.UnpauseObjectiveChain");
		
		UMission_UnpauseObjectiveChain_Params params {};
		params.Objective = Objective;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70EE0
	 * 		Name   -> Function GbxMission.Mission.ThwartObjectiveAndAdvanceObjectiveSet
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMissionObjective*                           ObjectiveToThwart                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMissionObjectiveSet*                        ObjectiveSet                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bJumpToSet                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMission::ThwartObjectiveAndAdvanceObjectiveSet(class UMissionObjective* ObjectiveToThwart, class UMissionObjectiveSet* ObjectiveSet, bool bJumpToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.ThwartObjectiveAndAdvanceObjectiveSet");
		
		UMission_ThwartObjectiveAndAdvanceObjectiveSet_Params params {};
		params.ObjectiveToThwart = ObjectiveToThwart;
		params.ObjectiveSet = ObjectiveSet;
		params.bJumpToSet = bJumpToSet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70EC0
	 * 		Name   -> Function GbxMission.Mission.StopMissionTimer
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UMission::StopMissionTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.StopMissionTimer");
		
		UMission_StopMissionTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70EA0
	 * 		Name   -> Function GbxMission.Mission.StartMissionTimer
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UMission::StartMissionTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.StartMissionTimer");
		
		UMission_StartMissionTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxMission.Mission.MissionTimerExpired
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UMission::MissionTimerExpired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionTimerExpired");
		
		UMission_MissionTimerExpired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70A70
	 * 		Name   -> Function GbxMission.Mission.MissionRemoteEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMission::MissionRemoteEvent(const class FName& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionRemoteEvent");
		
		UMission_MissionRemoteEvent_Params params {};
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxMission.Mission.MissionNotStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UMission::MissionNotStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionNotStarted");
		
		UMission_MissionNotStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxMission.Mission.MissionKickoff
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UMission::MissionKickoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionKickoff");
		
		UMission_MissionKickoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F709E0
	 * 		Name   -> Function GbxMission.Mission.MissionGameModeEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMission::MissionGameModeEvent(const class FName& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionGameModeEvent");
		
		UMission_MissionGameModeEvent_Params params {};
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxMission.Mission.MissionFailed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UMission::MissionFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionFailed");
		
		UMission_MissionFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxMission.Mission.MissionCompleteLoad
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UMission::MissionCompleteLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionCompleteLoad");
		
		UMission_MissionCompleteLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxMission.Mission.MissionComplete
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UMission::MissionComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionComplete");
		
		UMission_MissionComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxMission.Mission.MissionActiveLoad
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UMission::MissionActiveLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionActiveLoad");
		
		UMission_MissionActiveLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxMission.Mission.MissionActive
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UMission::MissionActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.MissionActive");
		
		UMission_MissionActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70910
	 * 		Name   -> Function GbxMission.Mission.JumpToObjectiveSet
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMissionObjectiveSet*                        ObjectiveSet                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsBranchingMission                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMission::JumpToObjectiveSet(class UMissionObjectiveSet* ObjectiveSet, bool bIsBranchingMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.JumpToObjectiveSet");
		
		UMission_JumpToObjectiveSet_Params params {};
		params.ObjectiveSet = ObjectiveSet;
		params.bIsBranchingMission = bIsBranchingMission;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F703E0
	 * 		Name   -> Function GbxMission.Mission.GetPausableChainedObjectivesList
	 * 		Flags  -> (Final, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<class UMissionObjective*>                   ObjectivesList                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMission::GetPausableChainedObjectivesList(TArray<class UMissionObjective*>* ObjectivesList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.GetPausableChainedObjectivesList");
		
		UMission_GetPausableChainedObjectivesList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectivesList != nullptr)
			*ObjectivesList = params.ObjectivesList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70330
	 * 		Name   -> Function GbxMission.Mission.GetObjectivesList
	 * 		Flags  -> (Final, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<class UMissionObjective*>                   ObjectivesList                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMission::GetObjectivesList(TArray<class UMissionObjective*>* ObjectivesList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.GetObjectivesList");
		
		UMission_GetObjectivesList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectivesList != nullptr)
			*ObjectivesList = params.ObjectivesList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70280
	 * 		Name   -> Function GbxMission.Mission.GetObjectiveSetsList
	 * 		Flags  -> (Final, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<class UMissionObjectiveSet*>                ObjectiveSetsList                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMission::GetObjectiveSetsList(TArray<class UMissionObjectiveSet*>* ObjectiveSetsList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.GetObjectiveSetsList");
		
		UMission_GetObjectiveSetsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectiveSetsList != nullptr)
			*ObjectiveSetsList = params.ObjectiveSetsList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6F9F0
	 * 		Name   -> Function GbxMission.Mission.GetMissionRemainingSeconds
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	int32_t UMission::GetMissionRemainingSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.GetMissionRemainingSeconds");
		
		UMission_GetMissionRemainingSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6E830
	 * 		Name   -> Function GbxMission.Mission.FailMission
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UMission::FailMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.FailMission");
		
		UMission_FailMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6E500
	 * 		Name   -> Function GbxMission.Mission.EndKickoff
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMission::EndKickoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.EndKickoff");
		
		UMission_EndKickoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6E210
	 * 		Name   -> Function GbxMission.Mission.CompleteMission
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UMission::CompleteMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.CompleteMission");
		
		UMission_CompleteMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6E190
	 * 		Name   -> Function GbxMission.Mission.ClearObjective
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMissionObjective*                           Objective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMission::ClearObjective(class UMissionObjective* Objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.ClearObjective");
		
		UMission_ClearObjective_Params params {};
		params.Objective = Objective;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6DF00
	 * 		Name   -> Function GbxMission.Mission.AdvanceObjectiveSet
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMissionObjectiveSet*                        ObjectiveSet                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMission::AdvanceObjectiveSet(class UMissionObjectiveSet* ObjectiveSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.AdvanceObjectiveSet");
		
		UMission_AdvanceObjectiveSet_Params params {};
		params.ObjectiveSet = ObjectiveSet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6DD50
	 * 		Name   -> Function GbxMission.Mission.AddTimeToMission
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SecondsToAdd                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMission::AddTimeToMission(int32_t SecondsToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.AddTimeToMission");
		
		UMission_AddTimeToMission_Params params {};
		params.SecondsToAdd = SecondsToAdd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6DA20
	 * 		Name   -> Function GbxMission.Mission.ActivateMission
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMissionObjectiveSet*                        InitialObjectiveSet                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetAsTrackedMission                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMission::ActivateMission(class UMissionObjectiveSet* InitialObjectiveSet, bool bSetAsTrackedMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.Mission.ActivateMission");
		
		UMission_ActivateMission_Params params {};
		params.InitialObjectiveSet = InitialObjectiveSet;
		params.bSetAsTrackedMission = bSetAsTrackedMission;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMission.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMission::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.Mission");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70720
	 * 		Name   -> Function GbxMission.MissionDirectorComponent.IsAnyMissionAvailable
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EMissionAvailableResult                            OutResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionDirectorComponent::IsAnyMissionAvailable(EMissionAvailableResult* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDirectorComponent.IsAnyMissionAvailable");
		
		UMissionDirectorComponent_IsAnyMissionAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70690
	 * 		Name   -> Function GbxMission.MissionDirectorComponent.IsAnyMissionActive
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EMissionActiveResult                               OutResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionDirectorComponent::IsAnyMissionActive(EMissionActiveResult* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDirectorComponent.IsAnyMissionActive");
		
		UMissionDirectorComponent_IsAnyMissionActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6EEF0
	 * 		Name   -> Function GbxMission.MissionDirectorComponent.GetAllMissions
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UClass*>                              AllMissions                                                (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	 */
	void UMissionDirectorComponent::GetAllMissions(TArray<class UClass*>* AllMissions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDirectorComponent.GetAllMissions");
		
		UMissionDirectorComponent_GetAllMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllMissions != nullptr)
			*AllMissions = params.AllMissions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6E170
	 * 		Name   -> Function GbxMission.MissionDirectorComponent.ClearMissions
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UMissionDirectorComponent::ClearMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDirectorComponent.ClearMissions");
		
		UMissionDirectorComponent_ClearMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6DCD0
	 * 		Name   -> Function GbxMission.MissionDirectorComponent.AddMission
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InMission                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionDirectorComponent::AddMission(class UClass* InMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDirectorComponent.AddMission");
		
		UMissionDirectorComponent_AddMission_Params params {};
		params.InMission = InMission;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6DA00
	 * 		Name   -> Function GbxMission.MissionDirectorComponent.ActivateAvailableMission
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UMissionDirectorComponent::ActivateAvailableMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDirectorComponent.ActivateAvailableMission");
		
		UMissionDirectorComponent_ActivateAvailableMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionDirectorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionDirectorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionDirectorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F760E0
	 * 		Name   -> Function GbxMission.MissionIconComponent.SetIconState
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EMissionIconState                                  InState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionIconComponent::SetIconState(EMissionIconState InState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionIconComponent.SetIconState");
		
		UMissionIconComponent_SetIconState_Params params {};
		params.InState = InState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F76050
	 * 		Name   -> Function GbxMission.MissionIconComponent.SetIconEnabledCondition
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGbxCondition*                               EnabledCondition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMissionIconComponent::SetIconEnabledCondition(class UGbxCondition* EnabledCondition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionIconComponent.SetIconEnabledCondition");
		
		UMissionIconComponent_SetIconEnabledCondition_Params params {};
		params.EnabledCondition = EnabledCondition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F75FC0
	 * 		Name   -> Function GbxMission.MissionIconComponent.SetDisabledState
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bDisabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionIconComponent::SetDisabledState(bool bDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionIconComponent.SetDisabledState");
		
		UMissionIconComponent_SetDisabledState_Params params {};
		params.bDisabled = bDisabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F75E10
	 * 		Name   -> Function GbxMission.MissionIconComponent.OnRep_Enabled
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               bPreviouslyEnabled                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionIconComponent::OnRep_Enabled(bool bPreviouslyEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionIconComponent.OnRep_Enabled");
		
		UMissionIconComponent_OnRep_Enabled_Params params {};
		params.bPreviouslyEnabled = bPreviouslyEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F75D40
	 * 		Name   -> Function GbxMission.MissionIconComponent.IsIconEnabled
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	bool UMissionIconComponent::IsIconEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionIconComponent.IsIconEnabled");
		
		UMissionIconComponent_IsIconEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01313F20
	 * 		Name   -> Function GbxMission.MissionIconComponent.GetRequiredInterface
	 * 		Flags  -> (Final, Native, Public)
	 */
	class UClass* UMissionIconComponent::GetRequiredInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionIconComponent.GetRequiredInterface");
		
		UMissionIconComponent_GetRequiredInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01313D30
	 * 		Name   -> Function GbxMission.MissionIconComponent.EnabledConditionRequiresNativeClass
	 * 		Flags  -> (Final, Native, Public)
	 */
	bool UMissionIconComponent::EnabledConditionRequiresNativeClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionIconComponent.EnabledConditionRequiresNativeClass");
		
		UMissionIconComponent_EnabledConditionRequiresNativeClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionIconComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionIconComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionIconComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMissionTrackerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMissionTrackerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionTrackerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F75EC0
	 * 		Name   -> Function GbxMission.MissionTracker.OnStatIncrement
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class AActor*                                      StatContext                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGameStatData*                               StatId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMissionTracker::OnStatIncrement(class AActor* StatContext, class UGameStatData* StatId, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionTracker.OnStatIncrement");
		
		AMissionTracker_OnStatIncrement_Params params {};
		params.StatContext = StatContext;
		params.StatId = StatId;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F75EA0
	 * 		Name   -> Function GbxMission.MissionTracker.OnRep_LevelLoadEventsIssued
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AMissionTracker::OnRep_LevelLoadEventsIssued()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionTracker.OnRep_LevelLoadEventsIssued");
		
		AMissionTracker_OnRep_LevelLoadEventsIssued_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F75DF0
	 * 		Name   -> Function GbxMission.MissionTracker.OnRep_ActiveIcons
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AMissionTracker::OnRep_ActiveIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionTracker.OnRep_ActiveIcons");
		
		AMissionTracker_OnRep_ActiveIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMissionTracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMissionTracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionTracker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F775C0
	 * 		Name   -> Function GbxMission.PlayerMissionComponent.ServerTrackPreviousActiveMissionInList
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	 */
	void UPlayerMissionComponent::ServerTrackPreviousActiveMissionInList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ServerTrackPreviousActiveMissionInList");
		
		UPlayerMissionComponent_ServerTrackPreviousActiveMissionInList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F77570
	 * 		Name   -> Function GbxMission.PlayerMissionComponent.ServerTrackNextActiveMissionInList
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	 */
	void UPlayerMissionComponent::ServerTrackNextActiveMissionInList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ServerTrackNextActiveMissionInList");
		
		UPlayerMissionComponent_ServerTrackNextActiveMissionInList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F774B0
	 * 		Name   -> Function GbxMission.PlayerMissionComponent.ServerSetTrackedMission
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMissionComponent::ServerSetTrackedMission(class UClass* MissionClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ServerSetTrackedMission");
		
		UPlayerMissionComponent_ServerSetTrackedMission_Params params {};
		params.MissionClass = MissionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F773E0
	 * 		Name   -> Function GbxMission.PlayerMissionComponent.ClientUpdateMissionStatus
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMissionStatus                                     Status                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMissionComponent::ClientUpdateMissionStatus(class UClass* MissionClass, EMissionStatus Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientUpdateMissionStatus");
		
		UPlayerMissionComponent_ClientUpdateMissionStatus_Params params {};
		params.MissionClass = MissionClass;
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F772C0
	 * 		Name   -> Function GbxMission.PlayerMissionComponent.ClientUpdateActiveObjectiveSet
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMissionObjectiveSet*                        ActiveObjectiveSet                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UMissionObjective*>                   DormantObjectives                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPlayerMissionComponent::ClientUpdateActiveObjectiveSet(class UClass* MissionClass, class UMissionObjectiveSet* ActiveObjectiveSet, TArray<class UMissionObjective*> DormantObjectives)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientUpdateActiveObjectiveSet");
		
		UPlayerMissionComponent_ClientUpdateActiveObjectiveSet_Params params {};
		params.MissionClass = MissionClass;
		params.ActiveObjectiveSet = ActiveObjectiveSet;
		params.DormantObjectives = DormantObjectives;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F77230
	 * 		Name   -> Function GbxMission.PlayerMissionComponent.ClientTrackedMissionChanged
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMissionComponent::ClientTrackedMissionChanged(class UClass* MissionClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientTrackedMissionChanged");
		
		UPlayerMissionComponent_ClientTrackedMissionChanged_Params params {};
		params.MissionClass = MissionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F770F0
	 * 		Name   -> Function GbxMission.PlayerMissionComponent.ClientObjectiveUpdated
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMissionObjective*                           UpdatedObjective                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           ObjectiveBit                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMissionComponent::ClientObjectiveUpdated(class UClass* MissionClass, class UMissionObjective* UpdatedObjective, uint32_t ObjectiveBit, unsigned char Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientObjectiveUpdated");
		
		UPlayerMissionComponent_ClientObjectiveUpdated_Params params {};
		params.MissionClass = MissionClass;
		params.UpdatedObjective = UpdatedObjective;
		params.ObjectiveBit = ObjectiveBit;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F77020
	 * 		Name   -> Function GbxMission.PlayerMissionComponent.ClientObjectiveSetCompleted
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMissionObjectiveSet*                        CompletedObjectiveSet                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMissionComponent::ClientObjectiveSetCompleted(class UClass* MissionClass, class UMissionObjectiveSet* CompletedObjectiveSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientObjectiveSetCompleted");
		
		UPlayerMissionComponent_ClientObjectiveSetCompleted_Params params {};
		params.MissionClass = MissionClass;
		params.CompletedObjectiveSet = CompletedObjectiveSet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F76F50
	 * 		Name   -> Function GbxMission.PlayerMissionComponent.ClientObjectiveCleared
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMissionObjective*                           ClearedObjective                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMissionComponent::ClientObjectiveCleared(class UClass* MissionClass, class UMissionObjective* ClearedObjective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientObjectiveCleared");
		
		UPlayerMissionComponent_ClientObjectiveCleared_Params params {};
		params.MissionClass = MissionClass;
		params.ClearedObjective = ClearedObjective;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F76E80
	 * 		Name   -> Function GbxMission.PlayerMissionComponent.ClientObjectiveChainUnpaused
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMissionObjective*                           Objective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMissionComponent::ClientObjectiveChainUnpaused(class UClass* MissionClass, class UMissionObjective* Objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientObjectiveChainUnpaused");
		
		UPlayerMissionComponent_ClientObjectiveChainUnpaused_Params params {};
		params.MissionClass = MissionClass;
		params.Objective = Objective;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F76DF0
	 * 		Name   -> Function GbxMission.PlayerMissionComponent.ClientMissionTimerStopped
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMissionComponent::ClientMissionTimerStopped(class UClass* MissionClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientMissionTimerStopped");
		
		UPlayerMissionComponent_ClientMissionTimerStopped_Params params {};
		params.MissionClass = MissionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F76D60
	 * 		Name   -> Function GbxMission.PlayerMissionComponent.ClientMissionTimerStarted
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMissionComponent::ClientMissionTimerStarted(class UClass* MissionClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientMissionTimerStarted");
		
		UPlayerMissionComponent_ClientMissionTimerStarted_Params params {};
		params.MissionClass = MissionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F76C90
	 * 		Name   -> Function GbxMission.PlayerMissionComponent.ClientMissionTimerChanged
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SecondsToAdd                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMissionComponent::ClientMissionTimerChanged(class UClass* MissionClass, float SecondsToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientMissionTimerChanged");
		
		UPlayerMissionComponent_ClientMissionTimerChanged_Params params {};
		params.MissionClass = MissionClass;
		params.SecondsToAdd = SecondsToAdd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F76C00
	 * 		Name   -> Function GbxMission.PlayerMissionComponent.ClientMissionRegistered
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMissionComponent::ClientMissionRegistered(class UClass* MissionClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientMissionRegistered");
		
		UPlayerMissionComponent_ClientMissionRegistered_Params params {};
		params.MissionClass = MissionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F76B00
	 * 		Name   -> Function GbxMission.PlayerMissionComponent.ClientDormantObjectiveRemoved
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMissionObjective*                           Objective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIssueActiveEvent                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMissionComponent::ClientDormantObjectiveRemoved(class UClass* MissionClass, class UMissionObjective* Objective, bool bIssueActiveEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientDormantObjectiveRemoved");
		
		UPlayerMissionComponent_ClientDormantObjectiveRemoved_Params params {};
		params.MissionClass = MissionClass;
		params.Objective = Objective;
		params.bIssueActiveEvent = bIssueActiveEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F76A30
	 * 		Name   -> Function GbxMission.PlayerMissionComponent.ClientDormantObjectiveAdded
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMissionObjective*                           Objective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMissionComponent::ClientDormantObjectiveAdded(class UClass* MissionClass, class UMissionObjective* Objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.PlayerMissionComponent.ClientDormantObjectiveAdded");
		
		UPlayerMissionComponent_ClientDormantObjectiveAdded_Params params {};
		params.MissionClass = MissionClass;
		params.Objective = Objective;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerMissionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerMissionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.PlayerMissionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionAttributeValueResolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionAttributeValueResolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionAttributeValueResolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionCondition_List.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionCondition_List::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionCondition_List");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70C10
	 * 		Name   -> Function GbxMission.MissionDebugMenu.SelectMissionGraph
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MissionGraphId                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionDebugMenu::SelectMissionGraph(const class FName& MissionGraphId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.SelectMissionGraph");
		
		UMissionDebugMenu_SelectMissionGraph_Params params {};
		params.MissionGraphId = MissionGraphId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxMission.MissionDebugMenu.NotifyMissionActivationCheatStart
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void UMissionDebugMenu::NotifyMissionActivationCheatStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.NotifyMissionActivationCheatStart");
		
		UMissionDebugMenu_NotifyMissionActivationCheatStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6FE60
	 * 		Name   -> Function GbxMission.MissionDebugMenu.GetObjectiveSetItemsForMission
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        MissionId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGbxCascadingListItemData>           OutItems                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMissionDebugMenu::GetObjectiveSetItemsForMission(const class FName& MissionId, TArray<struct FGbxCascadingListItemData>* OutItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.GetObjectiveSetItemsForMission");
		
		UMissionDebugMenu_GetObjectiveSetItemsForMission_Params params {};
		params.MissionId = MissionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItems != nullptr)
			*OutItems = params.OutItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6FB80
	 * 		Name   -> Function GbxMission.MissionDebugMenu.GetMissionWithId
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        MissionId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMission* UMissionDebugMenu::GetMissionWithId(const class FName& MissionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.GetMissionWithId");
		
		UMissionDebugMenu_GetMissionWithId_Params params {};
		params.MissionId = MissionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6FA20
	 * 		Name   -> Function GbxMission.MissionDebugMenu.GetMissionStatus
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        MissionId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMissionStatus UMissionDebugMenu::GetMissionStatus(const class FName& MissionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.GetMissionStatus");
		
		UMissionDebugMenu_GetMissionStatus_Params params {};
		params.MissionId = MissionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6F1B0
	 * 		Name   -> Function GbxMission.MissionDebugMenu.GetItemsForMissionStatus
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EMissionDebugStatus                                Status                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGbxCascadingListItemData>           OutItems                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMissionDebugMenu::GetItemsForMissionStatus(EMissionDebugStatus Status, TArray<struct FGbxCascadingListItemData>* OutItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.GetItemsForMissionStatus");
		
		UMissionDebugMenu_GetItemsForMissionStatus_Params params {};
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItems != nullptr)
			*OutItems = params.OutItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6F110
	 * 		Name   -> Function GbxMission.MissionDebugMenu.GetItemsForMissionGraph
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FGbxCascadingListItemData>           OutItems                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMissionDebugMenu::GetItemsForMissionGraph(TArray<struct FGbxCascadingListItemData>* OutItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.GetItemsForMissionGraph");
		
		UMissionDebugMenu_GetItemsForMissionGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItems != nullptr)
			*OutItems = params.OutItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01408AB0
	 * 		Name   -> Function GbxMission.MissionDebugMenu.CompleteMission
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MissionId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionDebugMenu::CompleteMission(const class FName& MissionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.CompleteMission");
		
		UMissionDebugMenu_CompleteMission_Params params {};
		params.MissionId = MissionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6E090
	 * 		Name   -> Function GbxMission.MissionDebugMenu.AdvanceToObjectiveSet
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MissionId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ObjectiveSetId                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionDebugMenu::AdvanceToObjectiveSet(const class FName& MissionId, const class FName& ObjectiveSetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.AdvanceToObjectiveSet");
		
		UMissionDebugMenu_AdvanceToObjectiveSet_Params params {};
		params.MissionId = MissionId;
		params.ObjectiveSetId = ObjectiveSetId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01408AB0
	 * 		Name   -> Function GbxMission.MissionDebugMenu.AdvanceMission
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MissionId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionDebugMenu::AdvanceMission(const class FName& MissionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionDebugMenu.AdvanceMission");
		
		UMissionDebugMenu_AdvanceMission_Params params {};
		params.MissionId = MissionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionDebugMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionDebugMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionDebugMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionEnableCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionEnableCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionEnableCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionEnableConditionBreadcrumbLinkedObjective.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionEnableConditionBreadcrumbLinkedObjective::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionEnableConditionBreadcrumbLinkedObjective");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionEnableConditionKickoff.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionEnableConditionKickoff::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionEnableConditionKickoff");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionEnableConditionMission.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionEnableConditionMission::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionEnableConditionMission");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionEnableConditionMissionAvailable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionEnableConditionMissionAvailable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionEnableConditionMissionAvailable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionEnableConditionObjective.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionEnableConditionObjective::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionEnableConditionObjective");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionEnableConditionObjectiveCount.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionEnableConditionObjectiveCount::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionEnableConditionObjectiveCount");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionEnableConditionObjectiveSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionEnableConditionObjectiveSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionEnableConditionObjectiveSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F71200
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.UpdateMissionObjectiveRef
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMissionObjectiveReference                  ObjectiveRef                                               (Parm, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_UpdateMissionObjectiveRef(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.UpdateMissionObjectiveRef");
		
		UMissionFunctionLibrary_UpdateMissionObjectiveRef_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ObjectiveRef = ObjectiveRef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F71110
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.TrackPreviousActiveMissionInList
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_TrackPreviousActiveMissionInList(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.TrackPreviousActiveMissionInList");
		
		UMissionFunctionLibrary_TrackPreviousActiveMissionInList_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F710A0
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.TrackNextActiveMissionInList
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_TrackNextActiveMissionInList(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.TrackNextActiveMissionInList");
		
		UMissionFunctionLibrary_TrackNextActiveMissionInList_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70FF0
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.TrackActiveMission
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_TrackActiveMission(class UObject* WorldContextObject, class UClass* MissionClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.TrackActiveMission");
		
		UMissionFunctionLibrary_TrackActiveMission_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MissionClass = MissionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70DA0
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.SendMissionEventWithContext
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMissionEventReference                      EventRef                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     OptionalContext                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_SendMissionEventWithContext(const struct FMissionEventReference& EventRef, class UObject* WorldContextObject, class UObject* OptionalContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.SendMissionEventWithContext");
		
		UMissionFunctionLibrary_SendMissionEventWithContext_Params params {};
		params.EventRef = EventRef;
		params.WorldContextObject = WorldContextObject;
		params.OptionalContext = OptionalContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70CA0
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.SendMissionEvent
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMissionEventReference                      EventRef                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     OptionalContext                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_SendMissionEvent(class UObject* WorldContextObject, const struct FMissionEventReference& EventRef, class UObject* OptionalContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.SendMissionEvent");
		
		UMissionFunctionLibrary_SendMissionEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.EventRef = EventRef;
		params.OptionalContext = OptionalContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70B00
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.ResolveMissionSoftClassReference
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UClass* UMissionFunctionLibrary::STATIC_ResolveMissionSoftClassReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.ResolveMissionSoftClassReference");
		
		UMissionFunctionLibrary_ResolveMissionSoftClassReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F707B0
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.JumpToMissionObjectiveSetRef
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMissionObjectiveSetReference               ObjectiveSetRef                                            (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsBranchingMission                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_JumpToMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef, bool bIsBranchingMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.JumpToMissionObjectiveSetRef");
		
		UMissionFunctionLibrary_JumpToMissionObjectiveSetRef_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ObjectiveSetRef = ObjectiveSetRef;
		params.bIsBranchingMission = bIsBranchingMission;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70510
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetSoftObjectiveSetListForMission
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 */
	void UMissionFunctionLibrary::STATIC_GetSoftObjectiveSetListForMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetSoftObjectiveSetListForMission");
		
		UMissionFunctionLibrary_GetSoftObjectiveSetListForMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70490
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetPlotMissionIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMission*                                    MissionObj                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMissionFunctionLibrary::STATIC_GetPlotMissionIndex(class UMission* MissionObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetPlotMissionIndex");
		
		UMissionFunctionLibrary_GetPlotMissionIndex_Params params {};
		params.MissionObj = MissionObj;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70120
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetObjectiveSetNameListForMissionFromAssetSubclass
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		TArray<class FName>                                NamesList                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_GetObjectiveSetNameListForMissionFromAssetSubclass(TArray<class FName>* NamesList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetObjectiveSetNameListForMissionFromAssetSubclass");
		
		UMissionFunctionLibrary_GetObjectiveSetNameListForMissionFromAssetSubclass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NamesList != nullptr)
			*NamesList = params.NamesList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F70040
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetObjectiveSetNameListForMission
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                NamesList                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_GetObjectiveSetNameListForMission(class UClass* MissionClass, TArray<class FName>* NamesList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetObjectiveSetNameListForMission");
		
		UMissionFunctionLibrary_GetObjectiveSetNameListForMission_Params params {};
		params.MissionClass = MissionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NamesList != nullptr)
			*NamesList = params.NamesList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6FF60
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetObjectiveSetListForMission
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UMissionObjectiveSet*>                ObjectiveSetList                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_GetObjectiveSetListForMission(class UClass* MissionClass, TArray<class UMissionObjectiveSet*>* ObjectiveSetList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetObjectiveSetListForMission");
		
		UMissionFunctionLibrary_GetObjectiveSetListForMission_Params params {};
		params.MissionClass = MissionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectiveSetList != nullptr)
			*ObjectiveSetList = params.ObjectiveSetList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6FD00
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetObjectiveNameListForMissionFromAssetSubclass
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		TArray<class FName>                                NamesList                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_GetObjectiveNameListForMissionFromAssetSubclass(TArray<class FName>* NamesList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetObjectiveNameListForMissionFromAssetSubclass");
		
		UMissionFunctionLibrary_GetObjectiveNameListForMissionFromAssetSubclass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NamesList != nullptr)
			*NamesList = params.NamesList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6FC20
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetObjectiveNameListForMission
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                NamesList                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_GetObjectiveNameListForMission(class UClass* MissionClass, TArray<class FName>* NamesList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetObjectiveNameListForMission");
		
		UMissionFunctionLibrary_GetObjectiveNameListForMission_Params params {};
		params.MissionClass = MissionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NamesList != nullptr)
			*NamesList = params.NamesList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6FAC0
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetMissionStatus
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMissionStatus UMissionFunctionLibrary::STATIC_GetMissionStatus(class UObject* WorldContextObject, class UClass* MissionClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetMissionStatus");
		
		UMissionFunctionLibrary_GetMissionStatus_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MissionClass = MissionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6F8A0
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveStatusRef
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMissionObjectiveReference                  ObjectiveRef                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     OptionalContext                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMissionObjectiveStatus UMissionFunctionLibrary::STATIC_GetMissionObjectiveStatusRef(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef, class UObject* OptionalContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveStatusRef");
		
		UMissionFunctionLibrary_GetMissionObjectiveStatusRef_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ObjectiveRef = ObjectiveRef;
		params.OptionalContext = OptionalContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6F770
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveSetStatusRef
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMissionObjectiveSetReference               ObjectiveSetRef                                            (Parm, NativeAccessSpecifierPublic)
	 */
	EMissionObjectiveSetStatus UMissionFunctionLibrary::STATIC_GetMissionObjectiveSetStatusRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveSetStatusRef");
		
		UMissionFunctionLibrary_GetMissionObjectiveSetStatusRef_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ObjectiveSetRef = ObjectiveSetRef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6F5C0
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveCount
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMissionObjectiveReference                  ObjectiveRef                                               (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CurrentObjectiveCount                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TotalObjectiveCount                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_GetMissionObjectiveCount(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef, int32_t* CurrentObjectiveCount, int32_t* TotalObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveCount");
		
		UMissionFunctionLibrary_GetMissionObjectiveCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ObjectiveRef = ObjectiveRef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentObjectiveCount != nullptr)
			*CurrentObjectiveCount = params.CurrentObjectiveCount;
		if (TotalObjectiveCount != nullptr)
			*TotalObjectiveCount = params.TotalObjectiveCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6F540
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetMissionLevel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMission*                                    MissionObj                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMissionFunctionLibrary::STATIC_GetMissionLevel(class UMission* MissionObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetMissionLevel");
		
		UMissionFunctionLibrary_GetMissionLevel_Params params {};
		params.MissionObj = MissionObj;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6F430
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetMissionClassFromObjectiveReferenceWeak
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FMissionObjectiveReferenceWeak              ObjectiveReference                                         (Parm, NativeAccessSpecifierPublic)
	 */
	class UClass* UMissionFunctionLibrary::STATIC_GetMissionClassFromObjectiveReferenceWeak(const struct FMissionObjectiveReferenceWeak& ObjectiveReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetMissionClassFromObjectiveReferenceWeak");
		
		UMissionFunctionLibrary_GetMissionClassFromObjectiveReferenceWeak_Params params {};
		params.ObjectiveReference = ObjectiveReference;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6F350
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetMissionClassFromObjectiveReference
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FMissionObjectiveReference                  ObjectiveReference                                         (Parm, NativeAccessSpecifierPublic)
	 */
	class UClass* UMissionFunctionLibrary::STATIC_GetMissionClassFromObjectiveReference(const struct FMissionObjectiveReference& ObjectiveReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetMissionClassFromObjectiveReference");
		
		UMissionFunctionLibrary_GetMissionClassFromObjectiveReference_Params params {};
		params.ObjectiveReference = ObjectiveReference;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6F290
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetMission
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMission* UMissionFunctionLibrary::STATIC_GetMission(class UObject* WorldContextObject, class UClass* MissionClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetMission");
		
		UMissionFunctionLibrary_GetMission_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MissionClass = MissionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6F030
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetEventNameListForMission
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                NamesList                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_GetEventNameListForMission(class UClass* MissionClass, TArray<class FName>* NamesList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetEventNameListForMission");
		
		UMissionFunctionLibrary_GetEventNameListForMission_Params params {};
		params.MissionClass = MissionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NamesList != nullptr)
			*NamesList = params.NamesList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6EFA0
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetCurrentlyTrackedMission
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UMissionFunctionLibrary::STATIC_GetCurrentlyTrackedMission(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetCurrentlyTrackedMission");
		
		UMissionFunctionLibrary_GetCurrentlyTrackedMission_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6EE60
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetActivePlotMission
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UMissionFunctionLibrary::STATIC_GetActivePlotMission(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetActivePlotMission");
		
		UMissionFunctionLibrary_GetActivePlotMission_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6ED90
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.GetActiveMissions
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMission*> UMissionFunctionLibrary::STATIC_GetActiveMissions(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.GetActiveMissions");
		
		UMissionFunctionLibrary_GetActiveMissions_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6EC30
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveSetRef
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMissionObjectiveSetReference               MissionObjectiveSetRef                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      MissionClass                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ObjectiveSet                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_FillMissionObjectiveSetRef(struct FMissionObjectiveSetReference* MissionObjectiveSetRef, class UClass** MissionClass, const class FName& ObjectiveSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveSetRef");
		
		UMissionFunctionLibrary_FillMissionObjectiveSetRef_Params params {};
		params.ObjectiveSet = ObjectiveSet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MissionObjectiveSetRef != nullptr)
			*MissionObjectiveSetRef = params.MissionObjectiveSetRef;
		if (MissionClass != nullptr)
			*MissionClass = params.MissionClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6EAC0
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveRefWeak
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMissionObjectiveReferenceWeak              MissionObjectiveRef                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      MissionClass                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Objective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_FillMissionObjectiveRefWeak(struct FMissionObjectiveReferenceWeak* MissionObjectiveRef, class UClass** MissionClass, const class FName& Objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveRefWeak");
		
		UMissionFunctionLibrary_FillMissionObjectiveRefWeak_Params params {};
		params.Objective = Objective;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MissionObjectiveRef != nullptr)
			*MissionObjectiveRef = params.MissionObjectiveRef;
		if (MissionClass != nullptr)
			*MissionClass = params.MissionClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6E970
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveRef
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMissionObjectiveReference                  MissionObjectiveRef                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      MissionClass                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Objective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_FillMissionObjectiveRef(struct FMissionObjectiveReference* MissionObjectiveRef, class UClass** MissionClass, const class FName& Objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveRef");
		
		UMissionFunctionLibrary_FillMissionObjectiveRef_Params params {};
		params.Objective = Objective;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MissionObjectiveRef != nullptr)
			*MissionObjectiveRef = params.MissionObjectiveRef;
		if (MissionClass != nullptr)
			*MissionClass = params.MissionClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6E850
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.FillMissionEventRef
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMissionEventReference                      MissionEventRef                                            (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      MissionClass                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_FillMissionEventRef(struct FMissionEventReference* MissionEventRef, class UClass** MissionClass, const class FName& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.FillMissionEventRef");
		
		UMissionFunctionLibrary_FillMissionEventRef_Params params {};
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MissionEventRef != nullptr)
			*MissionEventRef = params.MissionEventRef;
		if (MissionClass != nullptr)
			*MissionClass = params.MissionClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6E680
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.EqualEqual_MissionObjectiveSetReference
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FMissionObjectiveSetReference               A                                                          (Parm, NativeAccessSpecifierPublic)
	 * 		struct FMissionObjectiveSetReference               B                                                          (Parm, NativeAccessSpecifierPublic)
	 */
	bool UMissionFunctionLibrary::STATIC_EqualEqual_MissionObjectiveSetReference(const struct FMissionObjectiveSetReference& A, const struct FMissionObjectiveSetReference& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.EqualEqual_MissionObjectiveSetReference");
		
		UMissionFunctionLibrary_EqualEqual_MissionObjectiveSetReference_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6E520
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.EqualEqual_MissionObjectiveReference
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FMissionObjectiveReference                  A                                                          (Parm, NativeAccessSpecifierPublic)
	 * 		struct FMissionObjectiveReference                  B                                                          (Parm, NativeAccessSpecifierPublic)
	 */
	bool UMissionFunctionLibrary::STATIC_EqualEqual_MissionObjectiveReference(const struct FMissionObjectiveReference& A, const struct FMissionObjectiveReference& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.EqualEqual_MissionObjectiveReference");
		
		UMissionFunctionLibrary_EqualEqual_MissionObjectiveReference_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6E3A0
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.DebugJumpToMissionObjectiveSetRef
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMissionObjectiveSetReference               ObjectiveSetRef                                            (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsBranchingMission                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_DebugJumpToMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef, bool bIsBranchingMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.DebugJumpToMissionObjectiveSetRef");
		
		UMissionFunctionLibrary_DebugJumpToMissionObjectiveSetRef_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ObjectiveSetRef = ObjectiveSetRef;
		params.bIsBranchingMission = bIsBranchingMission;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6E2E0
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.CreateMission
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMission* UMissionFunctionLibrary::STATIC_CreateMission(class UObject* WorldContextObject, class UClass* MissionClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.CreateMission");
		
		UMissionFunctionLibrary_CreateMission_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MissionClass = MissionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6E230
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.CompleteMission
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_CompleteMission(class UObject* WorldContextObject, class UClass* MissionClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.CompleteMission");
		
		UMissionFunctionLibrary_CompleteMission_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MissionClass = MissionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6DF80
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.AdvanceToBreadcrumbObjective
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMissionObjectiveReference                  BreadcrumbObjectiveRef                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_AdvanceToBreadcrumbObjective(class UObject* WorldContextObject, const struct FMissionObjectiveReference& BreadcrumbObjectiveRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.AdvanceToBreadcrumbObjective");
		
		UMissionFunctionLibrary_AdvanceToBreadcrumbObjective_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.BreadcrumbObjectiveRef = BreadcrumbObjectiveRef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6DDD0
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.AdvanceMissionObjectiveSetRef
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMissionObjectiveSetReference               ObjectiveSetRef                                            (Parm, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_AdvanceMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.AdvanceMissionObjectiveSetRef");
		
		UMissionFunctionLibrary_AdvanceMissionObjectiveSetRef_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ObjectiveSetRef = ObjectiveSetRef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6DBA0
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.ActivateMissionAtObjectiveSet
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMissionObjectiveSetReference               ObjectiveSetRef                                            (Parm, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_ActivateMissionAtObjectiveSet(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.ActivateMissionAtObjectiveSet");
		
		UMissionFunctionLibrary_ActivateMissionAtObjectiveSet_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ObjectiveSetRef = ObjectiveSetRef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F6DAF0
	 * 		Name   -> Function GbxMission.MissionFunctionLibrary.ActivateMission
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionFunctionLibrary::STATIC_ActivateMission(class UObject* WorldContextObject, class UClass* MissionClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionFunctionLibrary.ActivateMission");
		
		UMissionFunctionLibrary_ActivateMission_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MissionClass = MissionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionIconInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionIconInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionIconInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionIconObserverInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionIconObserverInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionIconObserverInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01313F20
	 * 		Name   -> Function GbxMission.MissionLocationData.GetRequiredInterface
	 * 		Flags  -> (Final, Native, Public)
	 */
	class UClass* UMissionLocationData::GetRequiredInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionLocationData.GetRequiredInterface");
		
		UMissionLocationData_GetRequiredInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01313D30
	 * 		Name   -> Function GbxMission.MissionLocationData.EnabledConditionRequiresNativeClass
	 * 		Flags  -> (Final, Native, Public)
	 */
	bool UMissionLocationData::EnabledConditionRequiresNativeClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionLocationData.EnabledConditionRequiresNativeClass");
		
		UMissionLocationData_EnabledConditionRequiresNativeClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionLocationData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionLocationData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionLocationData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionObjective.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionObjective::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionObjective");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F759B0
	 * 		Name   -> Function GbxMission.MissionObjectiveReferenceInterface.GetMissionObjectiveReferences
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FMissionObjectiveReference>          OutMissionObjectives                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMissionObjectiveReferenceInterface::GetMissionObjectiveReferences(TArray<struct FMissionObjectiveReference>* OutMissionObjectives)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionObjectiveReferenceInterface.GetMissionObjectiveReferences");
		
		UMissionObjectiveReferenceInterface_GetMissionObjectiveReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMissionObjectives != nullptr)
			*OutMissionObjectives = params.OutMissionObjectives;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionObjectiveReferenceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionObjectiveReferenceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionObjectiveReferenceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionObjectiveSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionObjectiveSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionObjectiveSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F75A80
	 * 		Name   -> Function GbxMission.MissionObjectiveSetReferenceInterface.GetMissionObjectiveSetReferences
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FMissionObjectiveSetReference>       OutMissionObjectiveSets                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMissionObjectiveSetReferenceInterface::GetMissionObjectiveSetReferences(TArray<struct FMissionObjectiveSetReference>* OutMissionObjectiveSets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionObjectiveSetReferenceInterface.GetMissionObjectiveSetReferences");
		
		UMissionObjectiveSetReferenceInterface_GetMissionObjectiveSetReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMissionObjectiveSets != nullptr)
			*OutMissionObjectiveSets = params.OutMissionObjectiveSets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionObjectiveSetReferenceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionObjectiveSetReferenceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionObjectiveSetReferenceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F75D70
	 * 		Name   -> Function GbxMission.MissionObserverComponent.ObserverMission
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      MissionClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionObserverComponent::ObserverMission(class UClass* MissionClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionObserverComponent.ObserverMission");
		
		UMissionObserverComponent_ObserverMission_Params params {};
		params.MissionClass = MissionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F75B50
	 * 		Name   -> Function GbxMission.MissionObserverComponent.GetUpdateEventObject
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UObject*>                             OutMissionInitialized                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class UObject*>                             OutMissionUpdate                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class UObject*>                             OutMissionObjectiveUpdate                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class UObject*>                             OutMissionObjectiveSetUpdate                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UMissionObserverComponent::GetUpdateEventObject(TArray<class UObject*>* OutMissionInitialized, TArray<class UObject*>* OutMissionUpdate, TArray<class UObject*>* OutMissionObjectiveUpdate, TArray<class UObject*>* OutMissionObjectiveSetUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionObserverComponent.GetUpdateEventObject");
		
		UMissionObserverComponent_GetUpdateEventObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMissionInitialized != nullptr)
			*OutMissionInitialized = params.OutMissionInitialized;
		if (OutMissionUpdate != nullptr)
			*OutMissionUpdate = params.OutMissionUpdate;
		if (OutMissionObjectiveUpdate != nullptr)
			*OutMissionObjectiveUpdate = params.OutMissionObjectiveUpdate;
		if (OutMissionObjectiveSetUpdate != nullptr)
			*OutMissionObjectiveSetUpdate = params.OutMissionObjectiveSetUpdate;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionObserverComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionObserverComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionObserverComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionObserverInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionObserverInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionObserverInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F75850
	 * 		Name   -> Function GbxMission.MissionObserverPlayerInterface.ClientReceiveMissionData
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		struct FReplicatedMissionData                      MissionData                                                (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMissionObserverPlayerInterface::ClientReceiveMissionData(const struct FReplicatedMissionData& MissionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionObserverPlayerInterface.ClientReceiveMissionData");
		
		UMissionObserverPlayerInterface_ClientReceiveMissionData_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionObserverPlayerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionObserverPlayerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionObserverPlayerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionPhase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionPhase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionPhase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F75900
	 * 		Name   -> Function GbxMission.MissionReferenceInterface.GetMissionClassReferences
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class UClass*>                              OutMissions                                                (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	 */
	void UMissionReferenceInterface::GetMissionClassReferences(TArray<class UClass*>* OutMissions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionReferenceInterface.GetMissionClassReferences");
		
		UMissionReferenceInterface_GetMissionClassReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMissions != nullptr)
			*OutMissions = params.OutMissions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012E0000
	 * 		Name   -> Function GbxMission.MissionReferenceInterface.CheckForMissionReferenceErrors
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	bool UMissionReferenceInterface::CheckForMissionReferenceErrors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxMission.MissionReferenceInterface.CheckForMissionReferenceErrors");
		
		UMissionReferenceInterface_CheckForMissionReferenceErrors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionReferenceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionReferenceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxMission.MissionReferenceInterface");
		return ptr;
	}

}


