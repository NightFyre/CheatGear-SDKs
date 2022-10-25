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
	 * 		Name   -> Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.CacheSummonMeshes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Cast_Base_C::CacheSummonMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.CacheSummonMeshes");
		
		UAction_PhaseTrance_Cast_Base_C_CacheSummonMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.FirePhaseCastProjectile
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Cast_Base_C::FirePhaseCastProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.FirePhaseCastProjectile");
		
		UAction_PhaseTrance_Cast_Base_C_FirePhaseCastProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.ResetCastMesh
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Cast_Base_C::ResetCastMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.ResetCastMesh");
		
		UAction_PhaseTrance_Cast_Base_C_ResetCastMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.StartCastSummonAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Cast_Base_C::StartCastSummonAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.StartCastSummonAnimation");
		
		UAction_PhaseTrance_Cast_Base_C_StartCastSummonAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastFeedback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Cast_Base_C::AN_PerformCastFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastFeedback");
		
		UAction_PhaseTrance_Cast_Base_C_AN_PerformCastFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_CreateCastProjectile
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Cast_Base_C::AN_CreateCastProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_CreateCastProjectile");
		
		UAction_PhaseTrance_Cast_Base_C_AN_CreateCastProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_Cast_Base_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.OnBegin");
		
		UAction_PhaseTrance_Cast_Base_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.TriggerActionSkillReactDialogue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Cast_Base_C::TriggerActionSkillReactDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.TriggerActionSkillReactDialogue");
		
		UAction_PhaseTrance_Cast_Base_C_TriggerActionSkillReactDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.TriggerActionSkillUseDialogue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Cast_Base_C::TriggerActionSkillUseDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.TriggerActionSkillUseDialogue");
		
		UAction_PhaseTrance_Cast_Base_C_TriggerActionSkillUseDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_Cast_Base_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.OnServerEnd");
		
		UAction_PhaseTrance_Cast_Base_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastCS_Part1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Cast_Base_C::AN_PerformCastCS_Part1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastCS_Part1");
		
		UAction_PhaseTrance_Cast_Base_C_AN_PerformCastCS_Part1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastCS_Part2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Cast_Base_C::AN_PerformCastCS_Part2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastCS_Part2");
		
		UAction_PhaseTrance_Cast_Base_C_AN_PerformCastCS_Part2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.PlayPhaseTranceHandEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Cast_Base_C::PlayPhaseTranceHandEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.PlayPhaseTranceHandEffects");
		
		UAction_PhaseTrance_Cast_Base_C_PlayPhaseTranceHandEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.ExecuteUbergraph_Action_PhaseTrance_Cast_Base
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_Cast_Base_C::ExecuteUbergraph_Action_PhaseTrance_Cast_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.ExecuteUbergraph_Action_PhaseTrance_Cast_Base");
		
		UAction_PhaseTrance_Cast_Base_C_ExecuteUbergraph_Action_PhaseTrance_Cast_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_PhaseTrance_Cast_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_PhaseTrance_Cast_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C");
		return ptr;
	}

}


