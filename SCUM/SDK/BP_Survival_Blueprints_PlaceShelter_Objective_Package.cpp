/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.GetPrisoner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APrisoner*                                   Prisoner                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Survival_Blueprints_PlaceShelter_Objective_C::GetPrisoner(class APrisoner** Prisoner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.GetPrisoner");
		
		ABP_Survival_Blueprints_PlaceShelter_Objective_C_GetPrisoner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Prisoner != nullptr)
			*Prisoner = params.Prisoner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.AddToDialogueQueue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogEvent                                       DialogueEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Survival_Blueprints_PlaceShelter_Objective_C::AddToDialogueQueue(EDialogEvent DialogueEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.AddToDialogueQueue");
		
		ABP_Survival_Blueprints_PlaceShelter_Objective_C_AddToDialogueQueue_Params params {};
		params.DialogueEvent = DialogueEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnObjectiveStarted
	 * 		Flags  -> ()
	 */
	void ABP_Survival_Blueprints_PlaceShelter_Objective_C::OnObjectiveStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnObjectiveStarted");
		
		ABP_Survival_Blueprints_PlaceShelter_Objective_C_OnObjectiveStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnTabModeOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETabMode                                           tabMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Survival_Blueprints_PlaceShelter_Objective_C::OnTabModeOpened(ETabMode tabMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnTabModeOpened");
		
		ABP_Survival_Blueprints_PlaceShelter_Objective_C_OnTabModeOpened_Params params {};
		params.tabMode = tabMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Survival_Blueprints_PlaceShelter_Objective_C::ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective");
		
		ABP_Survival_Blueprints_PlaceShelter_Objective_C_ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Survival_Blueprints_PlaceShelter_Objective_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Survival_Blueprints_PlaceShelter_Objective_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C");
		return ptr;
	}

}


