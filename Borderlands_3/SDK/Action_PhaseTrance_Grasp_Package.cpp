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
	 * 		Name   -> Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.DoDamageToImmuneTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Enemey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_Grasp_C::DoDamageToImmuneTarget(class AActor* Enemey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.DoDamageToImmuneTarget");
		
		UAction_PhaseTrance_Grasp_C_DoDamageToImmuneTarget_Params params {};
		params.Enemey = Enemey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.AnimNotify_CreateGraspingSphere
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PhaseTrance_Grasp_C::AnimNotify_CreateGraspingSphere()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.AnimNotify_CreateGraspingSphere");
		
		UAction_PhaseTrance_Grasp_C_AnimNotify_CreateGraspingSphere_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.HandleGraspTargetFound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               GraspTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_Grasp_C::HandleGraspTargetFound(class AOakCharacter* GraspTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.HandleGraspTargetFound");
		
		UAction_PhaseTrance_Grasp_C_HandleGraspTargetFound_Params params {};
		params.GraspTarget = GraspTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.ExecuteUbergraph_Action_PhaseTrance_Grasp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_Grasp_C::ExecuteUbergraph_Action_PhaseTrance_Grasp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.ExecuteUbergraph_Action_PhaseTrance_Grasp");
		
		UAction_PhaseTrance_Grasp_C_ExecuteUbergraph_Action_PhaseTrance_Grasp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_PhaseTrance_Grasp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_PhaseTrance_Grasp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C");
		return ptr;
	}

}


