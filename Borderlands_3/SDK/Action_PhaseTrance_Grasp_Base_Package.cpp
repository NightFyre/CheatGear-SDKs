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
	 * 		Name   -> Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.GetGraspDuration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_Grasp_Base_C::GetGraspDuration(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.GetGraspDuration");
		
		UAction_PhaseTrance_Grasp_Base_C_GetGraspDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.GraspTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      GraspTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_Grasp_Base_C::GraspTarget(class AActor* GraspTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.GraspTarget");
		
		UAction_PhaseTrance_Grasp_Base_C_GraspTarget_Params params {};
		params.GraspTarget = GraspTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.HandleGraspTargetSearchFailed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Grasp_Base_C::HandleGraspTargetSearchFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.HandleGraspTargetSearchFailed");
		
		UAction_PhaseTrance_Grasp_Base_C_HandleGraspTargetSearchFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.HandleGraspTargetFound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               GraspTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_Grasp_Base_C::HandleGraspTargetFound(class AOakCharacter* GraspTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.HandleGraspTargetFound");
		
		UAction_PhaseTrance_Grasp_Base_C_HandleGraspTargetFound_Params params {};
		params.GraspTarget = GraspTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.PerformGraspFeedback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Grasp_Base_C::PerformGraspFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.PerformGraspFeedback");
		
		UAction_PhaseTrance_Grasp_Base_C_PerformGraspFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.FindInstantPhaseWebGraspTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_Grasp_Base_C::FindInstantPhaseWebGraspTarget(class AOakCharacter** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.FindInstantPhaseWebGraspTarget");
		
		UAction_PhaseTrance_Grasp_Base_C_FindInstantPhaseWebGraspTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.Failure_08B09A8F480F3929252234B2AB30A873
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FEnvQueryResult                             QueryResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_Grasp_Base_C::Failure_08B09A8F480F3929252234B2AB30A873(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.Failure_08B09A8F480F3929252234B2AB30A873");
		
		UAction_PhaseTrance_Grasp_Base_C_Failure_08B09A8F480F3929252234B2AB30A873_Params params {};
		params.QueryResult = QueryResult;
		params.Location = Location;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.Success_08B09A8F480F3929252234B2AB30A873
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FEnvQueryResult                             QueryResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_Grasp_Base_C::Success_08B09A8F480F3929252234B2AB30A873(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.Success_08B09A8F480F3929252234B2AB30A873");
		
		UAction_PhaseTrance_Grasp_Base_C_Success_08B09A8F480F3929252234B2AB30A873_Params params {};
		params.QueryResult = QueryResult;
		params.Location = Location;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.TriggerActionSkillReactDialogue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Grasp_Base_C::TriggerActionSkillReactDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.TriggerActionSkillReactDialogue");
		
		UAction_PhaseTrance_Grasp_Base_C_TriggerActionSkillReactDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.TriggerActionSkillUseDialogue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Grasp_Base_C::TriggerActionSkillUseDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.TriggerActionSkillUseDialogue");
		
		UAction_PhaseTrance_Grasp_Base_C_TriggerActionSkillUseDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_Grasp_Base_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.OnServerBegin");
		
		UAction_PhaseTrance_Grasp_Base_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.AN_PerformGraspStartRumble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Grasp_Base_C::AN_PerformGraspStartRumble()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.AN_PerformGraspStartRumble");
		
		UAction_PhaseTrance_Grasp_Base_C_AN_PerformGraspStartRumble_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.AN_PerformGraspStartCS
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Grasp_Base_C::AN_PerformGraspStartCS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.AN_PerformGraspStartCS");
		
		UAction_PhaseTrance_Grasp_Base_C_AN_PerformGraspStartCS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.PlayPhaseTranceHandEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Grasp_Base_C::PlayPhaseTranceHandEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.PlayPhaseTranceHandEffects");
		
		UAction_PhaseTrance_Grasp_Base_C_PlayPhaseTranceHandEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.FindGraspTargetAsync
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Grasp_Base_C::FindGraspTargetAsync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.FindGraspTargetAsync");
		
		UAction_PhaseTrance_Grasp_Base_C_FindGraspTargetAsync_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.ExecuteUbergraph_Action_PhaseTrance_Grasp_Base
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_Grasp_Base_C::ExecuteUbergraph_Action_PhaseTrance_Grasp_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.ExecuteUbergraph_Action_PhaseTrance_Grasp_Base");
		
		UAction_PhaseTrance_Grasp_Base_C_ExecuteUbergraph_Action_PhaseTrance_Grasp_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_PhaseTrance_Grasp_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_PhaseTrance_Grasp_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C");
		return ptr;
	}

}


