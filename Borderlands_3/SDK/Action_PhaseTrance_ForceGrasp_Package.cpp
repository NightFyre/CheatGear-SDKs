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
	 * 		Name   -> Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.CreateSlamSphere
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               GraspTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_ForceGrasp_C::CreateSlamSphere(class AOakCharacter* GraspTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.CreateSlamSphere");
		
		UAction_PhaseTrance_ForceGrasp_C_CreateSlamSphere_Params params {};
		params.GraspTarget = GraspTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.TriggerActionSkillUseDialogue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_ForceGrasp_C::TriggerActionSkillUseDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.TriggerActionSkillUseDialogue");
		
		UAction_PhaseTrance_ForceGrasp_C_TriggerActionSkillUseDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.AnimNotify_CreateGraspingSphere
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_ForceGrasp_C::AnimNotify_CreateGraspingSphere()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.AnimNotify_CreateGraspingSphere");
		
		UAction_PhaseTrance_ForceGrasp_C_AnimNotify_CreateGraspingSphere_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.HandleGraspTargetFound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               GraspTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_ForceGrasp_C::HandleGraspTargetFound(class AOakCharacter* GraspTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.HandleGraspTargetFound");
		
		UAction_PhaseTrance_ForceGrasp_C_HandleGraspTargetFound_Params params {};
		params.GraspTarget = GraspTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.ExecuteUbergraph_Action_PhaseTrance_ForceGrasp
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_ForceGrasp_C::ExecuteUbergraph_Action_PhaseTrance_ForceGrasp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.ExecuteUbergraph_Action_PhaseTrance_ForceGrasp");
		
		UAction_PhaseTrance_ForceGrasp_C_ExecuteUbergraph_Action_PhaseTrance_ForceGrasp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_PhaseTrance_ForceGrasp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_PhaseTrance_ForceGrasp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C");
		return ptr;
	}

}


