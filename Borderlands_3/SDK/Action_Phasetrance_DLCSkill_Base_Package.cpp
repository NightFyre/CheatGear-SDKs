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
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.GetPhaseFlareSpawnLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     res                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::GetPhaseFlareSpawnLocation(struct FVector* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.GetPhaseFlareSpawnLocation");
		
		UAction_Phasetrance_DLCSkill_Base_C_GetPhaseFlareSpawnLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SetPhaseFlareSpawnLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::SetPhaseFlareSpawnLocation(const struct FVector& Loc, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SetPhaseFlareSpawnLocation");
		
		UAction_Phasetrance_DLCSkill_Base_C_SetPhaseFlareSpawnLocation_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnRep_SpawnLocation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::OnRep_SpawnLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnRep_SpawnLocation");
		
		UAction_Phasetrance_DLCSkill_Base_C_OnRep_SpawnLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.StartSummonAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::StartSummonAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.StartSummonAnimation");
		
		UAction_Phasetrance_DLCSkill_Base_C_StartSummonAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.HideArmsMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::HideArmsMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.HideArmsMesh");
		
		UAction_Phasetrance_DLCSkill_Base_C_HideArmsMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.ResetArmsMesh
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::ResetArmsMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.ResetArmsMesh");
		
		UAction_Phasetrance_DLCSkill_Base_C_ResetArmsMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.CacheSummonMeshes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::CacheSummonMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.CacheSummonMeshes");
		
		UAction_Phasetrance_DLCSkill_Base_C_CacheSummonMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SummonActionSkillOrb
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AProj_Siren_DLCSkill_WalkingPotato_Base_C*   Orb                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::SummonActionSkillOrb(bool* res, class AProj_Siren_DLCSkill_WalkingPotato_Base_C** Orb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SummonActionSkillOrb");
		
		UAction_Phasetrance_DLCSkill_Base_C_SummonActionSkillOrb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
		if (Orb != nullptr)
			*Orb = params.Orb;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnServerBegin");
		
		UAction_Phasetrance_DLCSkill_Base_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnServerEnd");
		
		UAction_Phasetrance_DLCSkill_Base_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.DetachOrb
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::DetachOrb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.DetachOrb");
		
		UAction_Phasetrance_DLCSkill_Base_C_DetachOrb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_SummonOrb
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::AN_SummonOrb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_SummonOrb");
		
		UAction_Phasetrance_DLCSkill_Base_C_AN_SummonOrb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_DetachOrb
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::AN_DetachOrb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_DetachOrb");
		
		UAction_Phasetrance_DLCSkill_Base_C_AN_DetachOrb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SendOrb
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::SendOrb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SendOrb");
		
		UAction_Phasetrance_DLCSkill_Base_C_SendOrb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_Remove3pGhostArms
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::AN_Remove3pGhostArms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_Remove3pGhostArms");
		
		UAction_Phasetrance_DLCSkill_Base_C_AN_Remove3pGhostArms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnBegin");
		
		UAction_Phasetrance_DLCSkill_Base_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.TriggerActionSkillUseDialogue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::TriggerActionSkillUseDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.TriggerActionSkillUseDialogue");
		
		UAction_Phasetrance_DLCSkill_Base_C_TriggerActionSkillUseDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.TriggerActionSkillReactDialogue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::TriggerActionSkillReactDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.TriggerActionSkillReactDialogue");
		
		UAction_Phasetrance_DLCSkill_Base_C_TriggerActionSkillReactDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.ExecuteUbergraph_Action_Phasetrance_DLCSkill_Base
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_DLCSkill_Base_C::ExecuteUbergraph_Action_Phasetrance_DLCSkill_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.ExecuteUbergraph_Action_Phasetrance_DLCSkill_Base");
		
		UAction_Phasetrance_DLCSkill_Base_C_ExecuteUbergraph_Action_Phasetrance_DLCSkill_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Phasetrance_DLCSkill_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Phasetrance_DLCSkill_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C");
		return ptr;
	}

}


